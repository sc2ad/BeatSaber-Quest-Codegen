#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class LightGroupSO;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentLightGroups;
}
namespace GlobalNamespace {
class ____GlobalNamespace__EnvironmentLightGroups____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4204))
// CS Name: EnvironmentLightGroups::<>c
class CORDL_TYPE ____GlobalNamespace__EnvironmentLightGroups____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__EnvironmentLightGroups____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnvironmentLightGroups____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentLightGroups____c(____GlobalNamespace__EnvironmentLightGroups____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__EnvironmentLightGroups____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__EnvironmentLightGroups____c(____GlobalNamespace__EnvironmentLightGroups____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__EnvironmentLightGroups____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__EnvironmentLightGroups____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__EnvironmentLightGroups____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__EnvironmentLightGroups____c& operator=(____GlobalNamespace__EnvironmentLightGroups____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__EnvironmentLightGroups____c& operator=(____GlobalNamespace__EnvironmentLightGroups____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__EnvironmentLightGroups____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__EnvironmentLightGroups____c value) ;

static ::GlobalNamespace::____GlobalNamespace__EnvironmentLightGroups____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::LightGroupSO,int32_t> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(::System::Func_2<::GlobalNamespace::LightGroupSO,int32_t> value) ;

static ::System::Func_2<::GlobalNamespace::LightGroupSO,int32_t> __get___9__6_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__EnvironmentLightGroups____c() ;

/// @brief Method .ctor addr 0x21bf45c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Sort>b__6_0 addr 0x21bf464 size 0x18 virtual false final false
 int32_t _Sort_b__6_0(::GlobalNamespace::LightGroupSO s) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnvironmentLightGroups
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4205))
// CS Name: EnvironmentLightGroups
class CORDL_TYPE EnvironmentLightGroups : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__EnvironmentLightGroups____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EnvironmentLightGroups() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups", modifiers: " const&", def_value: None }]
constexpr EnvironmentLightGroups(EnvironmentLightGroups const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightGroups", modifiers: "&&", def_value: None }]
constexpr EnvironmentLightGroups(EnvironmentLightGroups&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentLightGroups(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvironmentLightGroups& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentLightGroups& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentLightGroups& operator=(EnvironmentLightGroups&& o) noexcept = default;
  constexpr EnvironmentLightGroups& operator=(EnvironmentLightGroups const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO> __declspec(property(get=__get__lightGroupSOList, put=__set__lightGroupSOList))  _lightGroupSOList;

constexpr void __set__lightGroupSOList(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO> __get__lightGroupSOList() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightGroupSO> __declspec(property(get=__get__lightGroupSODict, put=__set__lightGroupSODict))  _lightGroupSODict;

constexpr void __set__lightGroupSODict(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightGroupSO> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::LightGroupSO> __get__lightGroupSODict() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO> __declspec(property(get=__get__lightGroupSOListForLightGroupDataDict, put=__set__lightGroupSOListForLightGroupDataDict))  _lightGroupSOListForLightGroupDataDict;

constexpr void __set__lightGroupSOListForLightGroupDataDict(::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO> __get__lightGroupSOListForLightGroupDataDict() const;


// Properties

 ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO> __declspec(property(get=get_lightGroupSOList))  lightGroupSOList;


// Methods

/// @brief Method get_lightGroupSOList addr 0x21bf07c size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::GlobalNamespace::LightGroupSO> get_lightGroupSOList() ;

/// @brief Method GetDataForGroup addr 0x21bf084 size 0x24c virtual false final false
 ::GlobalNamespace::LightGroupSO GetDataForGroup(int32_t groupId) ;

/// @brief Method Sort addr 0x21bf2d0 size 0x120 virtual false final false
 void Sort() ;

// Ctor Parameters []
explicit EnvironmentLightGroups() ;

/// @brief Method .ctor addr 0x21bf3f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentLightGroups);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentLightGroups, "", "EnvironmentLightGroups");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__EnvironmentLightGroups____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__EnvironmentLightGroups____c, "", "EnvironmentLightGroups/<>c");
