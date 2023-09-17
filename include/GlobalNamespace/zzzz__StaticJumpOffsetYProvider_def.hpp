#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticJumpOffsetYProvider;
}
namespace GlobalNamespace {
class ____GlobalNamespace__StaticJumpOffsetYProvider__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4943))
// CS Name: StaticJumpOffsetYProvider::InitData
class CORDL_TYPE ____GlobalNamespace__StaticJumpOffsetYProvider__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__StaticJumpOffsetYProvider__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StaticJumpOffsetYProvider__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__StaticJumpOffsetYProvider__InitData(____GlobalNamespace__StaticJumpOffsetYProvider__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__StaticJumpOffsetYProvider__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__StaticJumpOffsetYProvider__InitData(____GlobalNamespace__StaticJumpOffsetYProvider__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__StaticJumpOffsetYProvider__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__StaticJumpOffsetYProvider__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__StaticJumpOffsetYProvider__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__StaticJumpOffsetYProvider__InitData& operator=(____GlobalNamespace__StaticJumpOffsetYProvider__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__StaticJumpOffsetYProvider__InitData& operator=(____GlobalNamespace__StaticJumpOffsetYProvider__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_jumpyYOffset, put=__set_jumpyYOffset))  jumpyYOffset;

constexpr void __set_jumpyYOffset(float_t value) ;

constexpr float_t __get_jumpyYOffset() const;


// Methods

// Ctor Parameters [CppParam { name: "jumpyYOffset", ty: "float_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__StaticJumpOffsetYProvider__InitData(float_t jumpyYOffset) ;

/// @brief Method .ctor addr 0x224cf50 size 0x28 virtual false final false
 void _ctor(float_t jumpyYOffset) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StaticJumpOffsetYProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4944))
// CS Name: StaticJumpOffsetYProvider
class CORDL_TYPE StaticJumpOffsetYProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InitData = ::GlobalNamespace::____GlobalNamespace__StaticJumpOffsetYProvider__InitData;

/// @brief Convert operator to ::GlobalNamespace::IJumpOffsetYProvider
constexpr operator  ::GlobalNamespace::IJumpOffsetYProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StaticJumpOffsetYProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider", modifiers: " const&", def_value: None }]
constexpr StaticJumpOffsetYProvider(StaticJumpOffsetYProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticJumpOffsetYProvider", modifiers: "&&", def_value: None }]
constexpr StaticJumpOffsetYProvider(StaticJumpOffsetYProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticJumpOffsetYProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StaticJumpOffsetYProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticJumpOffsetYProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticJumpOffsetYProvider& operator=(StaticJumpOffsetYProvider&& o) noexcept = default;
  constexpr StaticJumpOffsetYProvider& operator=(StaticJumpOffsetYProvider const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__StaticJumpOffsetYProvider__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__StaticJumpOffsetYProvider__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__StaticJumpOffsetYProvider__InitData __get__initData() const;


// Properties

 float_t __declspec(property(get=get_jumpOffsetY))  jumpOffsetY;


// Methods

/// @brief Method get_jumpOffsetY addr 0x224cf2c size 0x1c virtual true final true
 float_t get_jumpOffsetY() ;

// Ctor Parameters []
explicit StaticJumpOffsetYProvider() ;

/// @brief Method .ctor addr 0x224cf48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StaticJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticJumpOffsetYProvider, "", "StaticJumpOffsetYProvider");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__StaticJumpOffsetYProvider__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__StaticJumpOffsetYProvider__InitData, "", "StaticJumpOffsetYProvider/InitData");
