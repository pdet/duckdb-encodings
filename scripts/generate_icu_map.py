import os
import re

python_standard_codecs = {
    "ascii": ["646", "us-ascii"],
    "big5": ["big5-tw", "csbig5"],
    "big5hkscs": ["big5-hkscs", "hkscs"],
    "cp037": ["IBM037", "IBM039"],
    "cp273": ["273", "IBM273", "csIBM273"],
    "cp424": ["EBCDIC-CP-HE", "IBM424"],
    "cp437": ["437", "IBM437"],
    "cp500": ["EBCDIC-CP-BE", "EBCDIC-CP-CH", "IBM500"],
    "cp720": [],
    "cp737": [],
    "cp775": ["IBM775"],
    "cp850": ["850", "IBM850"],
    "cp852": ["852", "IBM852"],
    "cp855": ["855", "IBM855"],
    "cp856": [],
    "cp857": ["857", "IBM857"],
    "cp858": ["858", "IBM858"],
    "cp860": ["860", "IBM860"],
    "cp861": ["861", "CP-IS", "IBM861"],
    "cp862": ["862", "IBM862"],
    "cp863": ["863", "IBM863"],
    "cp864": ["IBM864"],
    "cp865": ["865", "IBM865"],
    "cp866": ["866", "IBM866"],
    "cp869": ["869", "CP-GR", "IBM869"],
    "cp874": [],
    "cp875": [],
    "cp932": ["932", "ms932", "mskanji", "ms-kanji"],
    "cp949": ["949", "ms949", "uhc"],
    "cp950": ["950", "ms950"],
    "cp1006": [],
    "cp1026": ["ibm1026"],
    "cp1125": ["1125", "ibm1125", "cp866u", "ruscii"],
    "cp1140": ["ibm1140"],
    "cp1250": ["windows-1250"],
    "cp1251": ["windows-1251"],
    "cp1252": ["windows-1252"],
    "cp1253": ["windows-1253"],
    "cp1254": ["windows-1254"],
    "cp1255": ["windows-1255"],
    "cp1256": ["windows-1256"],
    "cp1257": ["windows-1257"],
    "cp1258": ["windows-1258"],
    "euc_jp": ["eucjp", "ujis", "u-jis"],
    "euc_jis_2004": ["jisx0213", "eucjis2004"],
    "euc_jisx0213": ["eucjisx0213"],
    "euc_kr": ["euckr", "korean", "ksc5601", "ks_c-5601", "ks_c-5601-1987", "ksx1001", "ks_x-1001"],
    "gb2312": ["chinese", "csiso58gb231280", "euc-cn", "euccn", "eucgb2312-cn", "gb2312-1980", "gb2312-80", "iso-ir-58"],
    "gbk": ["936", "cp936", "ms936"],
    "gb18030": ["gb18030-2000"],
    "hz": ["hzgb", "hz-gb", "hz-gb-2312"],
    "iso2022_jp": ["csiso2022jp", "iso2022jp", "iso-2022-jp"],
    "iso2022_jp_1": ["iso2022jp-1", "iso-2022-jp-1"],
    "iso2022_jp_2": ["iso2022jp-2", "iso-2022-jp-2"],
    "iso2022_jp_2004": ["iso2022jp-2004", "iso-2022-jp-2004"],
    "iso2022_jp_3": ["iso2022jp-3", "iso-2022-jp-3"],
    "iso2022_jp_ext": ["iso2022jp-ext", "iso-2022-jp-ext"],
    "iso2022_kr": ["csiso2022kr", "iso2022kr", "iso-2022-kr"],
    "latin_1": ["iso-8859-1", "iso8859-1", "8859", "cp819", "latin", "latin1", "L1"],
    "iso8859_2": ["iso-8859-2", "latin2", "L2"],
    "iso8859_3": ["iso-8859-3", "latin3", "L3"],
    "iso8859_4": ["iso-8859-4", "latin4", "L4"],
    "iso8859_5": ["iso-8859-5", "cyrillic"],
    "iso8859_6": ["iso-8859-6", "arabic"],
    "iso8859_7": ["iso-8859-7", "greek", "greek8"],
    "iso8859_8": ["iso-8859-8", "hebrew"],
    "iso8859_9": ["iso-8859-9", "latin5", "L5"],
    "iso8859_10": ["iso-8859-10", "latin6", "L6"],
    "iso8859_11": ["iso-8859-11", "thai"],
    "iso8859_13": ["iso-8859-13", "latin7", "L7"],
    "iso8859_14": ["iso-8859-14", "latin8", "L8"],
    "iso8859_15": ["iso-8859-15", "latin9", "L9"],
    "iso8859_16": ["iso-8859-16", "latin10", "L10"],
    "johab": ["cp1361", "ms1361"],
    "koi8_r": [],
    "koi8_t": [],
    "koi8_u": [],
    "kz1048": ["kz_1048", "strk1048_2002", "rk1048"],
    "mac_cyrillic": ["maccyrillic"],
    "mac_greek": ["macgreek"],
    "mac_iceland": ["maciceland"],
    "mac_latin2": ["maclatin2", "maccentraleurope", "mac_centeuro"],
    "mac_roman": ["macroman", "macintosh"],
    "mac_turkish": ["macturkish"],
    "ptcp154": ["csptcp154", "pt154", "cp154", "cyrillic-asian"],
    "shift_jis": ["csshiftjis", "shiftjis", "sjis", "s_jis"],
    "shift_jis_2004": ["shiftjis2004", "sjis_2004", "sjis2004"],
    "shift_jisx0213": ["shiftjisx0213", "sjisx0213", "s_jisx0213"],
    "utf_32": ["U32", "utf32"],
    "utf_32_be": ["UTF-32BE"],
    "utf_32_le": ["UTF-32LE"],
    "utf_16": ["U16", "utf16"],
    "utf_16_be": ["UTF-16BE"],
    "utf_16_le": ["UTF-16LE"],
    "utf_7": ["U7", "unicode-1-1-utf-7"],
    "utf_8": ["U8", "utf", "utf8"],
    "utf_8_sig": [],
}

def parse_ucm_file(file_path):
    code_set_name = None
    encoding_name = None
    mb_cur_max = None
    file_name = os.path.basename(file_path)  # Store the file name

    with open(file_path, "r", encoding="utf-8") as file:
        content = file.readlines()

    code_set_name_re = re.compile(r"<code_set_name>\s*\"([^\"]+)\"")
    encoding_name_re = re.compile(r"Encoding\s*description:\s*(.*)")
    mb_cur_max_re = re.compile(r"<mb_cur_max>\s*(\d+)")

    for line in content:
        if code_set_name_re.match(line):
            match = code_set_name_re.search(line)
            code_set_name = match.group(1) if match else None

        if encoding_name_re.match(line):
            match = encoding_name_re.search(line)
            encoding_name = match.group(1) if match else None

        if mb_cur_max_re.match(line):
            match = mb_cur_max_re.search(line)
            mb_cur_max = int(match.group(1)) if match else None

    return code_set_name, encoding_name, mb_cur_max, file_name

def generate_code_set_map(folder_path):
    code_set_map = {}

    for filename in os.listdir(folder_path):
        if filename.endswith(".ucm"):
            file_path = os.path.join(folder_path, filename)

            code_set_name, encoding_name, mb_cur_max, file_name = parse_ucm_file(file_path)

            if code_set_name:
                code_set_map[code_set_name] = {
                    "Encoding name": encoding_name,
                    "mb_cur_max": mb_cur_max,
                    "file_name": file_name
                }

    return code_set_map
    
def match_codecs(code_set_map, python_standard_codecs):
    matches = []
    seen_matches = set()  # This will keep track of already added matches
    for code_set_name, info in code_set_map.items():
        match = False
        for codec, aliases in python_standard_codecs.items():
            # Check for direct match or alias match
            if code_set_name == codec or any(alias.lower() == code_set_name.lower() for alias in aliases):
                match_tuple = (codec, code_set_name, info["Encoding name"], info["file_name"])
                if codec.lower() not in seen_matches:
                    matches.append(match_tuple)
                    seen_matches.add(codec.lower())  # Add to seen_matches set
                match = True
                break
            # Check for encoding name match or alias match
            if info["Encoding name"] and (info["Encoding name"].lower() == codec.lower() or
                                          any(alias.lower() == info["Encoding name"].lower() for alias in aliases)):
                match_tuple = (codec, code_set_name, info["Encoding name"], info["file_name"])
                if codec.lower() not in seen_matches:
                    matches.append(match_tuple)
                    seen_matches.add(codec.lower())  # Add to seen_matches set
                match = True
                break
        if not match:
            match_tuple = (code_set_name, code_set_name, info["Encoding name"], info["file_name"])
            if code_set_name.lower() not in seen_matches:
                matches.append(match_tuple)
                seen_matches.add(code_set_name.lower())  # Add to seen_matches set

    return matches

folder_path = "third_party/icu_encodings" 
code_set_map = generate_code_set_map(folder_path)


matches = match_codecs(code_set_map, python_standard_codecs)

print (matches)