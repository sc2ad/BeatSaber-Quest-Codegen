#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class InfBlocks;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class InfCodes;
}
// Type: Org.BouncyCastle.Utilities.Zlib::InfCodes
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1821))
// CS Name: Org.BouncyCastle.Utilities.Zlib.InfCodes
class CORDL_TYPE InfCodes : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~InfCodes() = default;

// Ctor Parameters [CppParam { name: "", ty: "InfCodes", modifiers: " const&", def_value: None }]
constexpr InfCodes(InfCodes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InfCodes", modifiers: "&&", def_value: None }]
constexpr InfCodes(InfCodes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InfCodes(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InfCodes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InfCodes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InfCodes& operator=(InfCodes&& o) noexcept = default;
  constexpr InfCodes& operator=(InfCodes const& o) noexcept = default;
                


// Fields

/// @brief Field Z_OK offset 0
static constexpr int32_t  Z_OK{0};

/// @brief Field Z_STREAM_END offset 0
static constexpr int32_t  Z_STREAM_END{1};

/// @brief Field Z_NEED_DICT offset 0
static constexpr int32_t  Z_NEED_DICT{2};

/// @brief Field Z_ERRNO offset 0
static constexpr int32_t  Z_ERRNO{-1};

/// @brief Field Z_STREAM_ERROR offset 0
static constexpr int32_t  Z_STREAM_ERROR{-2};

/// @brief Field Z_DATA_ERROR offset 0
static constexpr int32_t  Z_DATA_ERROR{-3};

/// @brief Field Z_MEM_ERROR offset 0
static constexpr int32_t  Z_MEM_ERROR{-4};

/// @brief Field Z_BUF_ERROR offset 0
static constexpr int32_t  Z_BUF_ERROR{-5};

/// @brief Field Z_VERSION_ERROR offset 0
static constexpr int32_t  Z_VERSION_ERROR{-6};

/// @brief Field START offset 0
static constexpr int32_t  START{0};

/// @brief Field LEN offset 0
static constexpr int32_t  LEN{1};

/// @brief Field LENEXT offset 0
static constexpr int32_t  LENEXT{2};

/// @brief Field DIST offset 0
static constexpr int32_t  DIST{3};

/// @brief Field DISTEXT offset 0
static constexpr int32_t  DISTEXT{4};

/// @brief Field COPY offset 0
static constexpr int32_t  COPY{5};

/// @brief Field LIT offset 0
static constexpr int32_t  LIT{6};

/// @brief Field WASH offset 0
static constexpr int32_t  WASH{7};

/// @brief Field END offset 0
static constexpr int32_t  END{8};

/// @brief Field BADCODE offset 0
static constexpr int32_t  BADCODE{9};

static ::ArrayW<int32_t> __declspec(property(get=__get_inflate_mask, put=__set_inflate_mask))  inflate_mask;

static void __set_inflate_mask(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_inflate_mask() ;

 int32_t __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(int32_t value) ;

constexpr int32_t __get_mode() const;

 int32_t __declspec(property(get=__get_len, put=__set_len))  len;

constexpr void __set_len(int32_t value) ;

constexpr int32_t __get_len() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_tree, put=__set_tree))  tree;

constexpr void __set_tree(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_tree() const;

 int32_t __declspec(property(get=__get_tree_index, put=__set_tree_index))  tree_index;

constexpr void __set_tree_index(int32_t value) ;

constexpr int32_t __get_tree_index() const;

 int32_t __declspec(property(get=__get_need, put=__set_need))  need;

constexpr void __set_need(int32_t value) ;

constexpr int32_t __get_need() const;

 int32_t __declspec(property(get=__get_lit, put=__set_lit))  lit;

constexpr void __set_lit(int32_t value) ;

constexpr int32_t __get_lit() const;

 int32_t __declspec(property(get=__get_get, put=__set_get))  get;

constexpr void __set_get(int32_t value) ;

constexpr int32_t __get_get() const;

 int32_t __declspec(property(get=__get_dist, put=__set_dist))  dist;

constexpr void __set_dist(int32_t value) ;

constexpr int32_t __get_dist() const;

 uint8_t __declspec(property(get=__get_lbits, put=__set_lbits))  lbits;

constexpr void __set_lbits(uint8_t value) ;

constexpr uint8_t __get_lbits() const;

 uint8_t __declspec(property(get=__get_dbits, put=__set_dbits))  dbits;

constexpr void __set_dbits(uint8_t value) ;

constexpr uint8_t __get_dbits() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_ltree, put=__set_ltree))  ltree;

constexpr void __set_ltree(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_ltree() const;

 int32_t __declspec(property(get=__get_ltree_index, put=__set_ltree_index))  ltree_index;

constexpr void __set_ltree_index(int32_t value) ;

constexpr int32_t __get_ltree_index() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_dtree, put=__set_dtree))  dtree;

constexpr void __set_dtree(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_dtree() const;

 int32_t __declspec(property(get=__get_dtree_index, put=__set_dtree_index))  dtree_index;

constexpr void __set_dtree_index(int32_t value) ;

constexpr int32_t __get_dtree_index() const;


// Methods

static Org::BouncyCastle::Utilities::Zlib::InfCodes New_ctor() ;

/// @brief Method .ctor addr 0x10d94f0 size 0xc virtual false final false
 void _ctor() ;

/// @brief Method init addr 0x10da8e0 size 0x24 virtual false final false
 void init(int32_t bl, int32_t bd, ::ArrayW<int32_t> tl, int32_t tl_index, ::ArrayW<int32_t> td, int32_t td_index, Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method proc addr 0x10dac64 size 0x9cc virtual false final false
 int32_t proc(Org::BouncyCastle::Utilities::Zlib::InfBlocks s, Org::BouncyCastle::Utilities::Zlib::ZStream z, int32_t r) ;

/// @brief Method free addr 0x10d95a0 size 0x4 virtual false final false
 void free(Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method inflate_fast addr 0x10db76c size 0x860 virtual false final false
 int32_t inflate_fast(int32_t bl, int32_t bd, ::ArrayW<int32_t> tl, int32_t tl_index, ::ArrayW<int32_t> td, int32_t td_index, Org::BouncyCastle::Utilities::Zlib::InfBlocks s, Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::InfCodes);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::InfCodes, "Org.BouncyCastle.Utilities.Zlib", "InfCodes");
