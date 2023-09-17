#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
class Component;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class Context;
}
// Forward declare root types
namespace Zenject {
struct ____Zenject__ZenjectBinding__BindTypes;
}
namespace Zenject {
class ZenjectBinding;
}
// Type: ::BindTypes
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11097))
// CS Name: Zenject.ZenjectBinding::BindTypes
struct CORDL_TYPE ____Zenject__ZenjectBinding__BindTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____Zenject__ZenjectBinding__BindTypes(int32_t value__) noexcept;


                    constexpr ____Zenject__ZenjectBinding__BindTypes(____Zenject__ZenjectBinding__BindTypes const&) = default;
                    constexpr ____Zenject__ZenjectBinding__BindTypes(____Zenject__ZenjectBinding__BindTypes&&) = default;
                    constexpr ____Zenject__ZenjectBinding__BindTypes& operator=(____Zenject__ZenjectBinding__BindTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Zenject__ZenjectBinding__BindTypes& operator=(____Zenject__ZenjectBinding__BindTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Zenject__ZenjectBinding__BindTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Zenject__ZenjectBinding__BindTypes_Unwrapped : int32_t {
__Self = 0,
__AllInterfaces = 1,
__AllInterfacesAndSelf = 2,
__BaseType = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Zenject__ZenjectBinding__BindTypes_Unwrapped () const noexcept {
return std::bit_cast<______Zenject__ZenjectBinding__BindTypes_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Self offset 0
static ::Zenject::____Zenject__ZenjectBinding__BindTypes const Self;

/// @brief Field AllInterfaces offset 0
static ::Zenject::____Zenject__ZenjectBinding__BindTypes const AllInterfaces;

/// @brief Field AllInterfacesAndSelf offset 0
static ::Zenject::____Zenject__ZenjectBinding__BindTypes const AllInterfacesAndSelf;

/// @brief Field BaseType offset 0
static ::Zenject::____Zenject__ZenjectBinding__BindTypes const BaseType;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ZenjectBinding
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11098))
// CS Name: Zenject.ZenjectBinding
class CORDL_TYPE ZenjectBinding : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BindTypes = ::Zenject::____Zenject__ZenjectBinding__BindTypes;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ZenjectBinding() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectBinding", modifiers: " const&", def_value: None }]
constexpr ZenjectBinding(ZenjectBinding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenjectBinding", modifiers: "&&", def_value: None }]
constexpr ZenjectBinding(ZenjectBinding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenjectBinding(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ZenjectBinding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenjectBinding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenjectBinding& operator=(ZenjectBinding&& o) noexcept = default;
  constexpr ZenjectBinding& operator=(ZenjectBinding const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::Component> __declspec(property(get=__get__components, put=__set__components))  _components;

constexpr void __set__components(::ArrayW<::UnityEngine::Component> value) ;

constexpr ::ArrayW<::UnityEngine::Component> __get__components() const;

 ::StringW __declspec(property(get=__get__identifier, put=__set__identifier))  _identifier;

constexpr void __set__identifier(::StringW value) ;

constexpr ::StringW __get__identifier() const;

 bool __declspec(property(get=__get__useSceneContext, put=__set__useSceneContext))  _useSceneContext;

constexpr void __set__useSceneContext(bool value) ;

constexpr bool __get__useSceneContext() const;

 bool __declspec(property(get=__get__ifNotBound, put=__set__ifNotBound))  _ifNotBound;

constexpr void __set__ifNotBound(bool value) ;

constexpr bool __get__ifNotBound() const;

 ::Zenject::Context __declspec(property(get=__get__context, put=__set__context))  _context;

constexpr void __set__context(::Zenject::Context value) ;

constexpr ::Zenject::Context __get__context() const;

 ::Zenject::____Zenject__ZenjectBinding__BindTypes __declspec(property(get=__get__bindType, put=__set__bindType))  _bindType;

constexpr void __set__bindType(::Zenject::____Zenject__ZenjectBinding__BindTypes value) ;

constexpr ::Zenject::____Zenject__ZenjectBinding__BindTypes __get__bindType() const;


// Properties

 bool __declspec(property(get=get_UseSceneContext))  UseSceneContext;

 bool __declspec(property(get=get_IfNotBound))  IfNotBound;

 ::Zenject::Context __declspec(property(get=get_Context, put=set_Context))  Context;

 ::ArrayW<::UnityEngine::Component> __declspec(property(get=get_Components))  Components;

 ::StringW __declspec(property(get=get_Identifier))  Identifier;

 ::Zenject::____Zenject__ZenjectBinding__BindTypes __declspec(property(get=get_BindType))  BindType;


// Methods

/// @brief Method get_UseSceneContext addr 0x2d7c6e8 size 0x8 virtual false final false
 bool get_UseSceneContext() ;

/// @brief Method get_IfNotBound addr 0x2d7c6f0 size 0x8 virtual false final false
 bool get_IfNotBound() ;

/// @brief Method get_Context addr 0x2d7c6f8 size 0x8 virtual false final false
 ::Zenject::Context get_Context() ;

/// @brief Method set_Context addr 0x2d7c700 size 0x8 virtual false final false
 void set_Context(::Zenject::Context value) ;

/// @brief Method get_Components addr 0x2d7c708 size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::Component> get_Components() ;

/// @brief Method get_Identifier addr 0x2d7c710 size 0x8 virtual false final false
 ::StringW get_Identifier() ;

/// @brief Method get_BindType addr 0x2d7c718 size 0x8 virtual false final false
 ::Zenject::____Zenject__ZenjectBinding__BindTypes get_BindType() ;

/// @brief Method Start addr 0x2d7c720 size 0x4 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit ZenjectBinding() ;

/// @brief Method .ctor addr 0x2d7c724 size 0x58 virtual false final false
 void _ctor() ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d7c77c size 0x178 virtual false final false
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Zenject::____Zenject__ZenjectBinding__BindTypes, "Zenject", "ZenjectBinding/BindTypes");
NEED_NO_BOX(::Zenject::ZenjectBinding);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ZenjectBinding, "Zenject", "ZenjectBinding");
