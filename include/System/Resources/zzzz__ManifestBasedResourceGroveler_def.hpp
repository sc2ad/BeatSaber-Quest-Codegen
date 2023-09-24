#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Globalization {
class CultureInfo;
}
namespace System::Resources {
class IResourceGroveler;
}
namespace System::Resources {
class System__Resources__ResourceManager__ResourceManagerMediator;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
// Forward declare root types
namespace System::Resources {
class ManifestBasedResourceGroveler;
}
// Type: System.Resources::ManifestBasedResourceGroveler
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3427))
// CS Name: System.Resources.ManifestBasedResourceGroveler
class CORDL_TYPE ManifestBasedResourceGroveler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Resources::IResourceGroveler
constexpr operator  System::Resources::IResourceGroveler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ManifestBasedResourceGroveler() = default;

// Ctor Parameters [CppParam { name: "", ty: "ManifestBasedResourceGroveler", modifiers: " const&", def_value: None }]
constexpr ManifestBasedResourceGroveler(ManifestBasedResourceGroveler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ManifestBasedResourceGroveler", modifiers: "&&", def_value: None }]
constexpr ManifestBasedResourceGroveler(ManifestBasedResourceGroveler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ManifestBasedResourceGroveler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ManifestBasedResourceGroveler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ManifestBasedResourceGroveler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ManifestBasedResourceGroveler& operator=(ManifestBasedResourceGroveler&& o) noexcept = default;
  constexpr ManifestBasedResourceGroveler& operator=(ManifestBasedResourceGroveler const& o) noexcept = default;
                


// Fields

 System::Resources::System__Resources__ResourceManager__ResourceManagerMediator __declspec(property(get=__get__mediator, put=__set__mediator))  _mediator;

constexpr void __set__mediator(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator value) ;

constexpr System::Resources::System__Resources__ResourceManager__ResourceManagerMediator __get__mediator() const;


// Methods

static System::Resources::ManifestBasedResourceGroveler New_ctor(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator mediator) ;

/// @brief Method .ctor addr 0x2373314 size 0x28 virtual false final false
 void _ctor(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator mediator) ;

/// @brief Method GetNeutralResourcesLanguage addr 0x237333c size 0x320 virtual false final false
static System::Globalization::CultureInfo GetNeutralResourcesLanguage(System::Reflection::Assembly a, ByRef<System::Resources::UltimateResourceFallbackLocation> fallbackLocation) ;

/// @brief Method GetNeutralResourcesLanguageAttribute addr 0x237365c size 0x74 virtual false final false
static bool GetNeutralResourcesLanguageAttribute(System::Reflection::Assembly assembly, ByRef<::StringW> cultureName, ByRef<int16_t> fallbackLocation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
NEED_NO_BOX(System::Resources::ManifestBasedResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ManifestBasedResourceGroveler, "System.Resources", "ManifestBasedResourceGroveler");
