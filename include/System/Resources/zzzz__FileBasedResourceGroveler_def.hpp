#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Resources {
class System__Resources__ResourceManager__ResourceManagerMediator;
}
namespace System::Resources {
class IResourceGroveler;
}
// Forward declare root types
namespace System::Resources {
class FileBasedResourceGroveler;
}
// Type: System.Resources::FileBasedResourceGroveler
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3425))
// CS Name: System.Resources.FileBasedResourceGroveler
class CORDL_TYPE FileBasedResourceGroveler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Resources::IResourceGroveler
constexpr operator  System::Resources::IResourceGroveler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~FileBasedResourceGroveler() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBasedResourceGroveler", modifiers: " const&", def_value: None }]
constexpr FileBasedResourceGroveler(FileBasedResourceGroveler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileBasedResourceGroveler", modifiers: "&&", def_value: None }]
constexpr FileBasedResourceGroveler(FileBasedResourceGroveler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileBasedResourceGroveler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FileBasedResourceGroveler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileBasedResourceGroveler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileBasedResourceGroveler& operator=(FileBasedResourceGroveler&& o) noexcept = default;
  constexpr FileBasedResourceGroveler& operator=(FileBasedResourceGroveler const& o) noexcept = default;
                


// Fields

 System::Resources::System__Resources__ResourceManager__ResourceManagerMediator __declspec(property(get=__get__mediator, put=__set__mediator))  _mediator;

constexpr void __set__mediator(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator value) ;

constexpr System::Resources::System__Resources__ResourceManager__ResourceManagerMediator __get__mediator() const;


// Methods

static System::Resources::FileBasedResourceGroveler New_ctor(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator mediator) ;

/// @brief Method .ctor addr 0x23732ec size 0x28 virtual false final false
 void _ctor(System::Resources::System__Resources__ResourceManager__ResourceManagerMediator mediator) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
NEED_NO_BOX(System::Resources::FileBasedResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(System::Resources::FileBasedResourceGroveler, "System.Resources", "FileBasedResourceGroveler");
