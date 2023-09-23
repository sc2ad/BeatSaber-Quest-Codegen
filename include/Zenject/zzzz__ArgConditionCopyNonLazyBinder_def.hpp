#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__InstantiateCallbackConditionCopyNonLazyBinder_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class BindInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class InstantiateCallbackConditionCopyNonLazyBinder;
}
// Forward declare root types
namespace Zenject {
class ArgConditionCopyNonLazyBinder;
}
// Type: Zenject::ArgConditionCopyNonLazyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10866))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10611))
// CS Name: Zenject.ArgConditionCopyNonLazyBinder
class CORDL_TYPE ArgConditionCopyNonLazyBinder : public Zenject::InstantiateCallbackConditionCopyNonLazyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ArgConditionCopyNonLazyBinder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgConditionCopyNonLazyBinder", modifiers: " const&", def_value: None }]
constexpr ArgConditionCopyNonLazyBinder(ArgConditionCopyNonLazyBinder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgConditionCopyNonLazyBinder", modifiers: "&&", def_value: None }]
constexpr ArgConditionCopyNonLazyBinder(ArgConditionCopyNonLazyBinder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArgConditionCopyNonLazyBinder(void* ptr) noexcept : Zenject::InstantiateCallbackConditionCopyNonLazyBinder(ptr) {
}


  constexpr ArgConditionCopyNonLazyBinder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArgConditionCopyNonLazyBinder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArgConditionCopyNonLazyBinder& operator=(ArgConditionCopyNonLazyBinder&& o) noexcept = default;
  constexpr ArgConditionCopyNonLazyBinder& operator=(ArgConditionCopyNonLazyBinder const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }]
explicit ArgConditionCopyNonLazyBinder(Zenject::BindInfo bindInfo) ;

/// @brief Method .ctor addr 0x2d4d238 size 0x8 virtual false final false
 void _ctor(Zenject::BindInfo bindInfo) ;

/// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 Zenject::InstantiateCallbackConditionCopyNonLazyBinder WithArguments(T param) ;

/// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2>
 Zenject::InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2) ;

/// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3>
 Zenject::InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2, TParam3 param3) ;

/// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4>
 Zenject::InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) ;

/// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5>
 Zenject::InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) ;

/// @brief Method WithArguments addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6>
 Zenject::InstantiateCallbackConditionCopyNonLazyBinder WithArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5, TParam6 param6) ;

/// @brief Method WithArguments addr 0x2d4d240 size 0x18c virtual false final false
 Zenject::InstantiateCallbackConditionCopyNonLazyBinder WithArguments(::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method WithArgumentsExplicit addr 0x2d4d3cc size 0x3a8 virtual false final false
 Zenject::InstantiateCallbackConditionCopyNonLazyBinder WithArgumentsExplicit(System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair> extraArgs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ArgConditionCopyNonLazyBinder);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ArgConditionCopyNonLazyBinder, "Zenject", "ArgConditionCopyNonLazyBinder");
