#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class StaticTree;
}
// Type: Org.BouncyCastle.Utilities.Zlib::StaticTree
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1825))
// CS Name: Org.BouncyCastle.Utilities.Zlib.StaticTree
class CORDL_TYPE StaticTree : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticTree() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticTree", modifiers: " const&", def_value: None }]
constexpr StaticTree(StaticTree const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticTree", modifiers: "&&", def_value: None }]
constexpr StaticTree(StaticTree&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticTree(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StaticTree& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticTree& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticTree& operator=(StaticTree&& o) noexcept = default;
  constexpr StaticTree& operator=(StaticTree const& o) noexcept = default;
                


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

/// @brief Field MAX_BL_BITS offset 0
static constexpr int32_t  MAX_BL_BITS{7};

static ::ArrayW<int16_t> __declspec(property(get=__get_static_ltree, put=__set_static_ltree))  static_ltree;

static void __set_static_ltree(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_static_ltree() ;

static ::ArrayW<int16_t> __declspec(property(get=__get_static_dtree, put=__set_static_dtree))  static_dtree;

static void __set_static_dtree(::ArrayW<int16_t> value) ;

static ::ArrayW<int16_t> __get_static_dtree() ;

static Org::BouncyCastle::Utilities::Zlib::StaticTree __declspec(property(get=__get_static_l_desc, put=__set_static_l_desc))  static_l_desc;

static void __set_static_l_desc(Org::BouncyCastle::Utilities::Zlib::StaticTree value) ;

static Org::BouncyCastle::Utilities::Zlib::StaticTree __get_static_l_desc() ;

static Org::BouncyCastle::Utilities::Zlib::StaticTree __declspec(property(get=__get_static_d_desc, put=__set_static_d_desc))  static_d_desc;

static void __set_static_d_desc(Org::BouncyCastle::Utilities::Zlib::StaticTree value) ;

static Org::BouncyCastle::Utilities::Zlib::StaticTree __get_static_d_desc() ;

static Org::BouncyCastle::Utilities::Zlib::StaticTree __declspec(property(get=__get_static_bl_desc, put=__set_static_bl_desc))  static_bl_desc;

static void __set_static_bl_desc(Org::BouncyCastle::Utilities::Zlib::StaticTree value) ;

static Org::BouncyCastle::Utilities::Zlib::StaticTree __get_static_bl_desc() ;

 ::ArrayW<int16_t> __declspec(property(get=__get_static_tree, put=__set_static_tree))  static_tree;

constexpr void __set_static_tree(::ArrayW<int16_t> value) ;

constexpr ::ArrayW<int16_t> __get_static_tree() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_extra_bits, put=__set_extra_bits))  extra_bits;

constexpr void __set_extra_bits(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_extra_bits() const;

 int32_t __declspec(property(get=__get_extra_base, put=__set_extra_base))  extra_base;

constexpr void __set_extra_base(int32_t value) ;

constexpr int32_t __get_extra_base() const;

 int32_t __declspec(property(get=__get_elems, put=__set_elems))  elems;

constexpr void __set_elems(int32_t value) ;

constexpr int32_t __get_elems() const;

 int32_t __declspec(property(get=__get_max_length, put=__set_max_length))  max_length;

constexpr void __set_max_length(int32_t value) ;

constexpr int32_t __get_max_length() const;


// Methods

static Org::BouncyCastle::Utilities::Zlib::StaticTree New_ctor(::ArrayW<int16_t> static_tree, ::ArrayW<int32_t> extra_bits, int32_t extra_base, int32_t elems, int32_t max_length) ;

/// @brief Method .ctor addr 0x10dd70c size 0x50 virtual false final false
 void _ctor(::ArrayW<int16_t> static_tree, ::ArrayW<int32_t> extra_bits, int32_t extra_base, int32_t elems, int32_t max_length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(Org::BouncyCastle::Utilities::Zlib::StaticTree);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Zlib::StaticTree, "Org.BouncyCastle.Utilities.Zlib", "StaticTree");
