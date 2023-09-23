#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UIElements {
class IUxmlFactory;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFactoryRegistry;
}
// Type: UnityEngine.UIElements::VisualElementFactoryRegistry
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7094))
// CS Name: UnityEngine.UIElements.VisualElementFactoryRegistry
class CORDL_TYPE VisualElementFactoryRegistry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~VisualElementFactoryRegistry() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFactoryRegistry", modifiers: " const&", def_value: None }]
constexpr VisualElementFactoryRegistry(VisualElementFactoryRegistry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFactoryRegistry", modifiers: "&&", def_value: None }]
constexpr VisualElementFactoryRegistry(VisualElementFactoryRegistry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementFactoryRegistry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VisualElementFactoryRegistry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementFactoryRegistry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementFactoryRegistry& operator=(VisualElementFactoryRegistry&& o) noexcept = default;
  constexpr VisualElementFactoryRegistry& operator=(VisualElementFactoryRegistry const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> __declspec(property(get=__get_s_Factories, put=__set_s_Factories))  s_Factories;

static void __set_s_Factories(System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> __get_s_Factories() ;


// Properties

static System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> __declspec(property(get=get_factories))  factories;


// Methods

/// @brief Method get_factories addr 0x2c99048 size 0xb0 virtual false final false
static System::Collections::Generic::Dictionary_2<::StringW,System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> get_factories() ;

/// @brief Method RegisterFactory addr 0x2c99ef4 size 0x470 virtual false final false
static void RegisterFactory(UnityEngine::UIElements::IUxmlFactory factory) ;

/// @brief Method TryGetValue addr 0x2c9a364 size 0x60 virtual false final false
static bool TryGetValue(::StringW fullTypeName, ByRef<System::Collections::Generic::List_1<UnityEngine::UIElements::IUxmlFactory>> factoryList) ;

/// @brief Method RegisterEngineFactories addr 0x2c990f8 size 0xb2c virtual false final false
static void RegisterEngineFactories() ;

/// @brief Method RegisterUserFactories addr 0x2c99c24 size 0x2d0 virtual false final false
static void RegisterUserFactories() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VisualElementFactoryRegistry);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualElementFactoryRegistry, "UnityEngine.UIElements", "VisualElementFactoryRegistry");
