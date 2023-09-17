#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class InfTree;
}
// Type: Org.BouncyCastle.Utilities.Zlib::InfTree
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1823))
// CS Name: Org.BouncyCastle.Utilities.Zlib.InfTree
class CORDL_TYPE InfTree : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~InfTree() = default;

// Ctor Parameters [CppParam { name: "", ty: "InfTree", modifiers: " const&", def_value: None }]
constexpr InfTree(InfTree const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InfTree", modifiers: "&&", def_value: None }]
constexpr InfTree(InfTree&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InfTree(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InfTree& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InfTree& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InfTree& operator=(InfTree&& o) noexcept = default;
  constexpr InfTree& operator=(InfTree const& o) noexcept = default;
                


// Fields

/// @brief Field MANY offset 0
static constexpr int32_t  MANY{1440};

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

/// @brief Field fixed_bl offset 0
static constexpr int32_t  fixed_bl{9};

/// @brief Field fixed_bd offset 0
static constexpr int32_t  fixed_bd{5};

/// @brief Field BMAX offset 0
static constexpr int32_t  BMAX{15};

static ::ArrayW<int32_t> __declspec(property(get=__get_fixed_tl, put=__set_fixed_tl))  fixed_tl;

static void __set_fixed_tl(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_fixed_tl() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_fixed_td, put=__set_fixed_td))  fixed_td;

static void __set_fixed_td(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_fixed_td() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_cplens, put=__set_cplens))  cplens;

static void __set_cplens(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_cplens() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_cplext, put=__set_cplext))  cplext;

static void __set_cplext(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_cplext() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_cpdist, put=__set_cpdist))  cpdist;

static void __set_cpdist(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_cpdist() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_cpdext, put=__set_cpdext))  cpdext;

static void __set_cpdext(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_cpdext() ;

 ::ArrayW<int32_t> __declspec(property(get=__get_hn, put=__set_hn))  hn;

constexpr void __set_hn(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_hn() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_v, put=__set_v))  v;

constexpr void __set_v(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_v() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_c, put=__set_c))  c;

constexpr void __set_c(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_c() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_r, put=__set_r))  r;

constexpr void __set_r(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_r() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_u, put=__set_u))  u;

constexpr void __set_u(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_u() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_x() const;


// Methods

/// @brief Method huft_build addr 0x10dcc10 size 0x750 virtual false final false
 int32_t huft_build(::ArrayW<int32_t> b, int32_t bindex, int32_t n, int32_t s, ::ArrayW<int32_t> d, ::ArrayW<int32_t> e, ::ArrayW<int32_t> t, ::ArrayW<int32_t> m, ::ArrayW<int32_t> hp, ::ArrayW<int32_t> hn, ::ArrayW<int32_t> v) ;

/// @brief Method inflate_trees_bits addr 0x10da904 size 0x114 virtual false final false
 int32_t inflate_trees_bits(::ArrayW<int32_t> c, ::ArrayW<int32_t> bb, ::ArrayW<int32_t> tb, ::ArrayW<int32_t> hp, ::Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method inflate_trees_dynamic addr 0x10daa18 size 0x24c virtual false final false
 int32_t inflate_trees_dynamic(int32_t nl, int32_t nd, ::ArrayW<int32_t> c, ::ArrayW<int32_t> bl, ::ArrayW<int32_t> bd, ::ArrayW<int32_t> tl, ::ArrayW<int32_t> td, ::ArrayW<int32_t> hp, ::Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method inflate_trees_fixed addr 0x10da7d4 size 0x10c virtual false final false
static int32_t inflate_trees_fixed(::ArrayW<int32_t> bl, ::ArrayW<int32_t> bd, ::ArrayW<::ArrayW<int32_t>> tl, ::ArrayW<::ArrayW<int32_t>> td, ::Org::BouncyCastle::Utilities::Zlib::ZStream z) ;

/// @brief Method initWorkArea addr 0x10dd360 size 0x194 virtual false final false
 void initWorkArea(int32_t vsize) ;

// Ctor Parameters []
explicit InfTree() ;

/// @brief Method .ctor addr 0x10d94fc size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::InfTree);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::InfTree, "Org.BouncyCastle.Utilities.Zlib", "InfTree");
