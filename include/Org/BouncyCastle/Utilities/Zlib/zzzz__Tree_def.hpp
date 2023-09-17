#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities::Zlib {
class Deflate;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class StaticTree;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class Tree;
}
// Type: Org.BouncyCastle.Utilities.Zlib::Tree
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1826))
// CS Name: Org.BouncyCastle.Utilities.Zlib.Tree
class CORDL_TYPE Tree : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Tree() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tree", modifiers: " const&", def_value: None }]
constexpr Tree(Tree const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tree", modifiers: "&&", def_value: None }]
constexpr Tree(Tree&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tree(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tree& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tree& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tree& operator=(Tree&& o) noexcept = default;
  constexpr Tree& operator=(Tree const& o) noexcept = default;
                


// Fields

/// @brief Field MAX_BITS offset 0
static constexpr int32_t  MAX_BITS{15};

/// @brief Field BL_CODES offset 0
static constexpr int32_t  BL_CODES{19};

/// @brief Field D_CODES offset 0
static constexpr int32_t  D_CODES{30};

/// @brief Field LITERALS offset 0
static constexpr int32_t  LITERALS{256};

/// @brief Field LENGTH_CODES offset 0
static constexpr int32_t  LENGTH_CODES{29};

/// @brief Field L_CODES offset 0
static constexpr int32_t  L_CODES{286};

/// @brief Field HEAP_SIZE offset 0
static constexpr int32_t  HEAP_SIZE{573};

/// @brief Field MAX_BL_BITS offset 0
static constexpr int32_t  MAX_BL_BITS{7};

/// @brief Field END_BLOCK offset 0
static constexpr int32_t  END_BLOCK{256};

/// @brief Field REP_3_6 offset 0
static constexpr int32_t  REP_3_6{16};

/// @brief Field REPZ_3_10 offset 0
static constexpr int32_t  REPZ_3_10{17};

/// @brief Field REPZ_11_138 offset 0
static constexpr int32_t  REPZ_11_138{18};

/// @brief Field Buf_size offset 0
static constexpr int32_t  Buf_size{16};

/// @brief Field DIST_CODE_LEN offset 0
static constexpr int32_t  DIST_CODE_LEN{512};

static ::ArrayW<int32_t> __declspec(property(get=__get_extra_lbits, put=__set_extra_lbits))  extra_lbits;

static void __set_extra_lbits(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_extra_lbits() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_extra_dbits, put=__set_extra_dbits))  extra_dbits;

static void __set_extra_dbits(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_extra_dbits() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_extra_blbits, put=__set_extra_blbits))  extra_blbits;

static void __set_extra_blbits(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_extra_blbits() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_bl_order, put=__set_bl_order))  bl_order;

static void __set_bl_order(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_bl_order() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get__dist_code, put=__set__dist_code))  _dist_code;

static void __set__dist_code(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__dist_code() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get__length_code, put=__set__length_code))  _length_code;

static void __set__length_code(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get__length_code() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_base_length, put=__set_base_length))  base_length;

static void __set_base_length(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_base_length() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_base_dist, put=__set_base_dist))  base_dist;

static void __set_base_dist(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_base_dist() ;

 ::ArrayW<int16_t> __declspec(property(get=__get_dyn_tree, put=__set_dyn_tree))  dyn_tree;

constexpr void __set_dyn_tree(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_dyn_tree() const;

 int32_t __declspec(property(get=__get_max_code, put=__set_max_code))  max_code;

constexpr void __set_max_code(int32_t value) ;

constexpr int32_t __get_max_code() const;

 ::Org::BouncyCastle::Utilities::Zlib::StaticTree __declspec(property(get=__get_stat_desc, put=__set_stat_desc))  stat_desc;

constexpr void __set_stat_desc(::Org::BouncyCastle::Utilities::Zlib::StaticTree value) ;

constexpr ::Org::BouncyCastle::Utilities::Zlib::StaticTree __get_stat_desc() const;


// Methods

/// @brief Method d_code addr 0x10dd934 size 0x98 virtual false final false
static int32_t d_code(int32_t dist) ;

/// @brief Method gen_bitlen addr 0x10dd9cc size 0x2cc virtual false final false
 void gen_bitlen(::Org::BouncyCastle::Utilities::Zlib::Deflate s) ;

/// @brief Method build_tree addr 0x10ddc98 size 0x474 virtual false final false
 void build_tree(::Org::BouncyCastle::Utilities::Zlib::Deflate s) ;

/// @brief Method gen_codes addr 0x10de10c size 0x17c virtual false final false
static void gen_codes(::ArrayW<int16_t> tree, int32_t max_code, ::ArrayW<int16_t> bl_count) ;

/// @brief Method bi_reverse addr 0x10de288 size 0x28 virtual false final false
static int32_t bi_reverse(int32_t code, int32_t len) ;

// Ctor Parameters []
explicit Tree() ;

/// @brief Method .ctor addr 0x10de514 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::Tree);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::Tree, "Org.BouncyCastle.Utilities.Zlib", "Tree");
