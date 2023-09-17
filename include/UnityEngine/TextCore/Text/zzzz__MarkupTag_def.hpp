#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct MarkupTag;
}
// Type: UnityEngine.TextCore.Text::MarkupTag
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13528))
// CS Name: UnityEngine.TextCore.Text.MarkupTag
struct CORDL_TYPE MarkupTag : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MarkupTag(int32_t value__) noexcept;


                    constexpr MarkupTag(MarkupTag const&) = default;
                    constexpr MarkupTag(MarkupTag&&) = default;
                    constexpr MarkupTag& operator=(MarkupTag const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MarkupTag& operator=(MarkupTag&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MarkupTag(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MarkupTag_Unwrapped : int32_t {
__BOLD = 66,
__SLASH_BOLD = 1613,
__ITALIC = 73,
__SLASH_ITALIC = 1606,
__UNDERLINE = 85,
__SLASH_UNDERLINE = 1626,
__STRIKETHROUGH = 83,
__SLASH_STRIKETHROUGH = 1628,
__MARK = 2699125,
__SLASH_MARK = 57644506,
__SUBSCRIPT = 92132,
__SLASH_SUBSCRIPT = 1770219,
__SUPERSCRIPT = 92150,
__SLASH_SUPERSCRIPT = 1770233,
__COLOR = 81999901,
__SLASH_COLOR = 1909026194,
__ALPHA = 75165780,
__A = 65,
__SLASH_A = 1614,
__SIZE = 3061285,
__SLASH_SIZE = 58429962,
__SPRITE = -991527447,
__NO_BREAK = 2856657,
__SLASH_NO_BREAK = 57477502,
__STYLE = 100252951,
__SLASH_STYLE = 1927738392,
__FONT = 2586451,
__SLASH_FONT = 57747708,
__SLASH_MATERIAL = -1100708252,
__LINK = 2656128,
__SLASH_LINK = 57686191,
__FONT_WEIGHT = -1889896162,
__SLASH_FONT_WEIGHT = -757976431,
__NO_PARSE = -408011596,
__SLASH_NO_PARSE = -294095813,
__POSITION = 85420,
__SLASH_POSITION = 1777699,
__VERTICAL_OFFSET = 1952379995,
__SLASH_VERTICAL_OFFSET = -11107948,
__SPACE = 100083556,
__SLASH_SPACE = 1927873067,
__PAGE = 2808691,
__SLASH_PAGE = 58683868,
__ALIGN = 75138797,
__SLASH_ALIGN = 1916026786,
__WIDTH = 105793766,
__SLASH_WIDTH = 1923459625,
__GRADIENT = -1999759898,
__SLASH_GRADIENT = -1854491959,
__CHARACTER_SPACE = -1584382009,
__SLASH_CHARACTER_SPACE = -1394426712,
__MONOSPACE = -1340221943,
__SLASH_MONOSPACE = -1638865562,
__CLASS = 82115566,
__INDENT = -1514123076,
__SLASH_INDENT = -1496889389,
__LINE_INDENT = -844305121,
__SLASH_LINE_INDENT = 93886352,
__MARGIN = -1355614050,
__SLASH_MARGIN = -1649644303,
__MARGIN_LEFT = -272933656,
__MARGIN_RIGHT = -447416589,
__LINE_HEIGHT = -799081892,
__SLASH_LINE_HEIGHT = 200452819,
__ACTION = -1827519330,
__SLASH_ACTION = -1187217679,
__SCALE = 100553336,
__SLASH_SCALE = 1928413879,
__ROTATE = -1000007783,
__SLASH_ROTATE = -764695562,
__LOWERCASE = -1506899689,
__SLASH_LOWERCASE = -1451284584,
__ALLCAPS = 218273952,
__SLASH_ALLCAPS = -797437649,
__UPPERCASE = -305409418,
__SLASH_UPPERCASE = -582368199,
__SMALLCAPS = -766062114,
__SLASH_SMALLCAPS = 199921873,
__LIGA = 2655971,
__SLASH_LIGA = 57686604,
__FRAC = 2598518,
__SLASH_FRAC = 57774681,
__NAME = 2875623,
__INDEX = 84268030,
__TINT = 2960519,
__ANIM = 2283339,
__MATERIAL = 825491659,
__HREF = 2535353,
__ANGLE = 75347905,
__RED = 91635,
__GREEN = 87065851,
__BLUE = 2457214,
__YELLOW = -882444668,
__ORANGE = -1108587920,
__BLACK = 81074727,
__WHITE = 105680263,
__PURPLE = -1250222130,
__BR = 2256,
__ZWSP = 3288238,
__NBSP = 2869039,
__SHY = 92674,
__LEFT = 2660507,
__RIGHT = 99937376,
__CENTER = -1591113269,
__JUSTIFIED = 817091359,
__FLUSH = 85552164,
__NONE = 2857034,
__PLUS = 43,
__MINUS = 45,
__PX = 2568,
__PLUS_PX = 49507,
__MINUS_PX = 47461,
__EM = 2216,
__PLUS_EM = 49091,
__MINUS_EM = 46789,
__PCT = 85031,
__PLUS_PCT = 1634348,
__MINUS_PCT = 1567082,
__PERCENTAGE = 37,
__PLUS_PERCENTAGE = 1454,
__MINUS_PERCENTAGE = 1512,
__TRUE = 2932022,
__FALSE = 85422813,
__INVALID = 1585415185,
__NORMAL = -1183493901,
__DEFAULT = -620974005,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MarkupTag_Unwrapped () const noexcept {
return std::bit_cast<__MarkupTag_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field BOLD offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const BOLD;

/// @brief Field SLASH_BOLD offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_BOLD;

/// @brief Field ITALIC offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ITALIC;

/// @brief Field SLASH_ITALIC offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ITALIC;

/// @brief Field UNDERLINE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const UNDERLINE;

/// @brief Field SLASH_UNDERLINE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_UNDERLINE;

/// @brief Field STRIKETHROUGH offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const STRIKETHROUGH;

/// @brief Field SLASH_STRIKETHROUGH offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_STRIKETHROUGH;

/// @brief Field MARK offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MARK;

/// @brief Field SLASH_MARK offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_MARK;

/// @brief Field SUBSCRIPT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SUBSCRIPT;

/// @brief Field SLASH_SUBSCRIPT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SUBSCRIPT;

/// @brief Field SUPERSCRIPT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SUPERSCRIPT;

/// @brief Field SLASH_SUPERSCRIPT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SUPERSCRIPT;

/// @brief Field COLOR offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const COLOR;

/// @brief Field SLASH_COLOR offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_COLOR;

/// @brief Field ALPHA offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ALPHA;

/// @brief Field A offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const A;

/// @brief Field SLASH_A offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_A;

/// @brief Field SIZE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SIZE;

/// @brief Field SLASH_SIZE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SIZE;

/// @brief Field SPRITE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SPRITE;

/// @brief Field NO_BREAK offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const NO_BREAK;

/// @brief Field SLASH_NO_BREAK offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_NO_BREAK;

/// @brief Field STYLE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const STYLE;

/// @brief Field SLASH_STYLE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_STYLE;

/// @brief Field FONT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const FONT;

/// @brief Field SLASH_FONT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_FONT;

/// @brief Field SLASH_MATERIAL offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_MATERIAL;

/// @brief Field LINK offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const LINK;

/// @brief Field SLASH_LINK offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LINK;

/// @brief Field FONT_WEIGHT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const FONT_WEIGHT;

/// @brief Field SLASH_FONT_WEIGHT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_FONT_WEIGHT;

/// @brief Field NO_PARSE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const NO_PARSE;

/// @brief Field SLASH_NO_PARSE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_NO_PARSE;

/// @brief Field POSITION offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const POSITION;

/// @brief Field SLASH_POSITION offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_POSITION;

/// @brief Field VERTICAL_OFFSET offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const VERTICAL_OFFSET;

/// @brief Field SLASH_VERTICAL_OFFSET offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_VERTICAL_OFFSET;

/// @brief Field SPACE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SPACE;

/// @brief Field SLASH_SPACE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SPACE;

/// @brief Field PAGE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PAGE;

/// @brief Field SLASH_PAGE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_PAGE;

/// @brief Field ALIGN offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ALIGN;

/// @brief Field SLASH_ALIGN offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ALIGN;

/// @brief Field WIDTH offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const WIDTH;

/// @brief Field SLASH_WIDTH offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_WIDTH;

/// @brief Field GRADIENT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const GRADIENT;

/// @brief Field SLASH_GRADIENT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_GRADIENT;

/// @brief Field CHARACTER_SPACE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const CHARACTER_SPACE;

/// @brief Field SLASH_CHARACTER_SPACE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_CHARACTER_SPACE;

/// @brief Field MONOSPACE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MONOSPACE;

/// @brief Field SLASH_MONOSPACE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_MONOSPACE;

/// @brief Field CLASS offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const CLASS;

/// @brief Field INDENT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const INDENT;

/// @brief Field SLASH_INDENT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_INDENT;

/// @brief Field LINE_INDENT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const LINE_INDENT;

/// @brief Field SLASH_LINE_INDENT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LINE_INDENT;

/// @brief Field MARGIN offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MARGIN;

/// @brief Field SLASH_MARGIN offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_MARGIN;

/// @brief Field MARGIN_LEFT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MARGIN_LEFT;

/// @brief Field MARGIN_RIGHT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MARGIN_RIGHT;

/// @brief Field LINE_HEIGHT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const LINE_HEIGHT;

/// @brief Field SLASH_LINE_HEIGHT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LINE_HEIGHT;

/// @brief Field ACTION offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ACTION;

/// @brief Field SLASH_ACTION offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ACTION;

/// @brief Field SCALE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SCALE;

/// @brief Field SLASH_SCALE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SCALE;

/// @brief Field ROTATE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ROTATE;

/// @brief Field SLASH_ROTATE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ROTATE;

/// @brief Field LOWERCASE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const LOWERCASE;

/// @brief Field SLASH_LOWERCASE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LOWERCASE;

/// @brief Field ALLCAPS offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ALLCAPS;

/// @brief Field SLASH_ALLCAPS offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_ALLCAPS;

/// @brief Field UPPERCASE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const UPPERCASE;

/// @brief Field SLASH_UPPERCASE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_UPPERCASE;

/// @brief Field SMALLCAPS offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SMALLCAPS;

/// @brief Field SLASH_SMALLCAPS offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_SMALLCAPS;

/// @brief Field LIGA offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const LIGA;

/// @brief Field SLASH_LIGA offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_LIGA;

/// @brief Field FRAC offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const FRAC;

/// @brief Field SLASH_FRAC offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SLASH_FRAC;

/// @brief Field NAME offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const NAME;

/// @brief Field INDEX offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const INDEX;

/// @brief Field TINT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const TINT;

/// @brief Field ANIM offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ANIM;

/// @brief Field MATERIAL offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MATERIAL;

/// @brief Field HREF offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const HREF;

/// @brief Field ANGLE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ANGLE;

/// @brief Field RED offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const RED;

/// @brief Field GREEN offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const GREEN;

/// @brief Field BLUE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const BLUE;

/// @brief Field YELLOW offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const YELLOW;

/// @brief Field ORANGE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ORANGE;

/// @brief Field BLACK offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const BLACK;

/// @brief Field WHITE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const WHITE;

/// @brief Field PURPLE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PURPLE;

/// @brief Field BR offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const BR;

/// @brief Field ZWSP offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const ZWSP;

/// @brief Field NBSP offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const NBSP;

/// @brief Field SHY offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const SHY;

/// @brief Field LEFT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const LEFT;

/// @brief Field RIGHT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const RIGHT;

/// @brief Field CENTER offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const CENTER;

/// @brief Field JUSTIFIED offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const JUSTIFIED;

/// @brief Field FLUSH offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const FLUSH;

/// @brief Field NONE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const NONE;

/// @brief Field PLUS offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PLUS;

/// @brief Field MINUS offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MINUS;

/// @brief Field PX offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PX;

/// @brief Field PLUS_PX offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PLUS_PX;

/// @brief Field MINUS_PX offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MINUS_PX;

/// @brief Field EM offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const EM;

/// @brief Field PLUS_EM offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PLUS_EM;

/// @brief Field MINUS_EM offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MINUS_EM;

/// @brief Field PCT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PCT;

/// @brief Field PLUS_PCT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PLUS_PCT;

/// @brief Field MINUS_PCT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MINUS_PCT;

/// @brief Field PERCENTAGE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PERCENTAGE;

/// @brief Field PLUS_PERCENTAGE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const PLUS_PERCENTAGE;

/// @brief Field MINUS_PERCENTAGE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const MINUS_PERCENTAGE;

/// @brief Field TRUE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const TRUE;

/// @brief Field FALSE offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const FALSE;

/// @brief Field INVALID offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const INVALID;

/// @brief Field NORMAL offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const NORMAL;

/// @brief Field DEFAULT offset 0
static ::UnityEngine::TextCore::Text::MarkupTag const DEFAULT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::MarkupTag, "UnityEngine.TextCore.Text", "MarkupTag");
