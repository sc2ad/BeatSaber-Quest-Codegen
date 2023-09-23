#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/zzzz__ReadOnlyCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::ComponentModel {
class IComponent;
}
// Forward declare root types
namespace System::ComponentModel {
class ComponentCollection;
}
// Type: System.ComponentModel::ComponentCollection
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3762))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8238))
// CS Name: System.ComponentModel.ComponentCollection
class CORDL_TYPE ComponentCollection : public System::Collections::ReadOnlyCollectionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ComponentCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "ComponentCollection", modifiers: " const&", def_value: None }]
constexpr ComponentCollection(ComponentCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ComponentCollection", modifiers: "&&", def_value: None }]
constexpr ComponentCollection(ComponentCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ComponentCollection(void* ptr) noexcept : System::Collections::ReadOnlyCollectionBase(ptr) {
}


  constexpr ComponentCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ComponentCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ComponentCollection& operator=(ComponentCollection&& o) noexcept = default;
  constexpr ComponentCollection& operator=(ComponentCollection const& o) noexcept = default;
                


// Properties

 System::ComponentModel::IComponent __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Item addr 0x2771294 size 0x588 virtual true final false
 System::ComponentModel::IComponent get_Item(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ComponentCollection);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ComponentCollection, "System.ComponentModel", "ComponentCollection");
