#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace Zenject {
class IProvider;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class IProviderExtensions;
}
// Type: Zenject::IProviderExtensions
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11147))
// CS Name: Zenject.IProviderExtensions
class CORDL_TYPE IProviderExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IProviderExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "IProviderExtensions", modifiers: " const&", def_value: None }]
constexpr IProviderExtensions(IProviderExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IProviderExtensions", modifiers: "&&", def_value: None }]
constexpr IProviderExtensions(IProviderExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IProviderExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IProviderExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IProviderExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IProviderExtensions& operator=(IProviderExtensions&& o) noexcept = default;
  constexpr IProviderExtensions& operator=(IProviderExtensions const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<Zenject::TypeValuePair> __declspec(property(get=__get_EmptyArgList, put=__set_EmptyArgList))  EmptyArgList;

static void __set_EmptyArgList(System::Collections::Generic::List_1<Zenject::TypeValuePair> value) ;

static System::Collections::Generic::List_1<Zenject::TypeValuePair> __get_EmptyArgList() ;


// Methods

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8e698 size 0xfc virtual false final false
static void GetAllInstancesWithInjectSplit(Zenject::IProvider creator, Zenject::InjectContext context, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method GetAllInstances addr 0x2d8e794 size 0x78 virtual false final false
static void GetAllInstances(Zenject::IProvider creator, Zenject::InjectContext context, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method GetAllInstances addr 0x2d8e80c size 0xf8 virtual false final false
static void GetAllInstances(Zenject::IProvider creator, Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

/// @brief Method TryGetInstance addr 0x2d8e904 size 0x70 virtual false final false
static ::bs_hook::Il2CppWrapperType TryGetInstance(Zenject::IProvider creator, Zenject::InjectContext context) ;

/// @brief Method TryGetInstance addr 0x2d8e974 size 0x1ec virtual false final false
static ::bs_hook::Il2CppWrapperType TryGetInstance(Zenject::IProvider creator, Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args) ;

/// @brief Method GetInstance addr 0x2d8eb60 size 0x70 virtual false final false
static ::bs_hook::Il2CppWrapperType GetInstance(Zenject::IProvider creator, Zenject::InjectContext context) ;

/// @brief Method GetInstance addr 0x2d8ebd0 size 0x23c virtual false final false
static ::bs_hook::Il2CppWrapperType GetInstance(Zenject::IProvider creator, Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::IProviderExtensions);
DEFINE_IL2CPP_ARG_TYPE(Zenject::IProviderExtensions, "Zenject", "IProviderExtensions");
