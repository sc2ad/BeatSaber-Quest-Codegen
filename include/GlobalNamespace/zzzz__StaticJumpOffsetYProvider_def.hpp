#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class IJumpOffsetYProvider;
}
namespace GlobalNamespace {
class GlobalNamespace__StaticJumpOffsetYProvider__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__StaticJumpOffsetYProvider__InitData;
}
namespace GlobalNamespace {
class StaticJumpOffsetYProvider;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4943))
// CS Name: StaticJumpOffsetYProvider::InitData
class CORDL_TYPE GlobalNamespace__StaticJumpOffsetYProvider__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__StaticJumpOffsetYProvider__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StaticJumpOffsetYProvider__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StaticJumpOffsetYProvider__InitData(GlobalNamespace__StaticJumpOffsetYProvider__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StaticJumpOffsetYProvider__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StaticJumpOffsetYProvider__InitData(GlobalNamespace__StaticJumpOffsetYProvider__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StaticJumpOffsetYProvider__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__StaticJumpOffsetYProvider__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StaticJumpOffsetYProvider__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StaticJumpOffsetYProvider__InitData& operator=(GlobalNamespace__StaticJumpOffsetYProvider__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__StaticJumpOffsetYProvider__InitData& operator=(GlobalNamespace__StaticJumpOffsetYProvider__InitData const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_jumpyYOffset, put=__set_jumpyYOffset))  jumpyYOffset;

constexpr void __set_jumpyYOffset(float_t value) ;

constexpr float_t __get_jumpyYOffset() const;


// Methods

static GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData New_ctor(float_t jumpyYOffset) ;

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
using InitData = GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData;

/// @brief Convert operator to GlobalNamespace::IJumpOffsetYProvider
constexpr operator  GlobalNamespace::IJumpOffsetYProvider() const noexcept;

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

 GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData __get__initData() const;


// Properties

 float_t __declspec(property(get=get_jumpOffsetY))  jumpOffsetY;


// Methods

/// @brief Method get_jumpOffsetY addr 0x224cf2c size 0x1c virtual true final true
 float_t get_jumpOffsetY() ;

static GlobalNamespace::StaticJumpOffsetYProvider New_ctor() ;

/// @brief Method .ctor addr 0x224cf48 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__StaticJumpOffsetYProvider__InitData, "", "StaticJumpOffsetYProvider/InitData");
NEED_NO_BOX(GlobalNamespace::StaticJumpOffsetYProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StaticJumpOffsetYProvider, "", "StaticJumpOffsetYProvider");
