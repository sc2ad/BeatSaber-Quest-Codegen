#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IList;
}
namespace System::ComponentModel {
struct ListSortDirection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::ComponentModel {
class IBindingList;
}
// Type: System.ComponentModel::IBindingList
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8281))
// CS Name: System.ComponentModel.IBindingList
class CORDL_TYPE IBindingList : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IList
constexpr operator  ::System::Collections::IList() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

~IBindingList() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IBindingList(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_AllowNew))  AllowNew;

 bool __declspec(property(get=get_AllowEdit))  AllowEdit;

 bool __declspec(property(get=get_AllowRemove))  AllowRemove;

 bool __declspec(property(get=get_SupportsChangeNotification))  SupportsChangeNotification;

 bool __declspec(property(get=get_SupportsSearching))  SupportsSearching;

 bool __declspec(property(get=get_SupportsSorting))  SupportsSorting;

 bool __declspec(property(get=get_IsSorted))  IsSorted;

 ::System::ComponentModel::PropertyDescriptor __declspec(property(get=get_SortProperty))  SortProperty;

 ::System::ComponentModel::ListSortDirection __declspec(property(get=get_SortDirection))  SortDirection;


// Methods

/// @brief Method get_AllowNew addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_AllowNew() ;

/// @brief Method AddNew addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType AddNew() ;

/// @brief Method get_AllowEdit addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_AllowEdit() ;

/// @brief Method get_AllowRemove addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_AllowRemove() ;

/// @brief Method get_SupportsChangeNotification addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_SupportsChangeNotification() ;

/// @brief Method get_SupportsSearching addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_SupportsSearching() ;

/// @brief Method get_SupportsSorting addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_SupportsSorting() ;

/// @brief Method get_IsSorted addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsSorted() ;

/// @brief Method get_SortProperty addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ComponentModel::PropertyDescriptor get_SortProperty() ;

/// @brief Method get_SortDirection addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::ComponentModel::ListSortDirection get_SortDirection() ;

/// @brief Method AddIndex addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddIndex(::System::ComponentModel::PropertyDescriptor property) ;

/// @brief Method ApplySort addr 0x0 size 0xffffffffffffffff virtual true final false
 void ApplySort(::System::ComponentModel::PropertyDescriptor property, ::System::ComponentModel::ListSortDirection direction) ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Find(::System::ComponentModel::PropertyDescriptor property, ::bs_hook::Il2CppWrapperType key) ;

/// @brief Method RemoveIndex addr 0x0 size 0xffffffffffffffff virtual true final false
 void RemoveIndex(::System::ComponentModel::PropertyDescriptor property) ;

/// @brief Method RemoveSort addr 0x0 size 0xffffffffffffffff virtual true final false
 void RemoveSort() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::IBindingList);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IBindingList, "System.ComponentModel", "IBindingList");
