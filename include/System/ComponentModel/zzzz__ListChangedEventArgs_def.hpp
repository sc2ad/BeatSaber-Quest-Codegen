#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
namespace System::ComponentModel {
struct ListChangedType;
}
// Forward declare root types
namespace System::ComponentModel {
class ListChangedEventArgs;
}
// Type: System.ComponentModel::ListChangedEventArgs
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8290))
// CS Name: System.ComponentModel.ListChangedEventArgs
class CORDL_TYPE ListChangedEventArgs : public System::EventArgs {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ListChangedEventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "ListChangedEventArgs", modifiers: " const&", def_value: None }]
constexpr ListChangedEventArgs(ListChangedEventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ListChangedEventArgs", modifiers: "&&", def_value: None }]
constexpr ListChangedEventArgs(ListChangedEventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ListChangedEventArgs(void* ptr) noexcept : System::EventArgs(ptr) {
}


  constexpr ListChangedEventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ListChangedEventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ListChangedEventArgs& operator=(ListChangedEventArgs&& o) noexcept = default;
  constexpr ListChangedEventArgs& operator=(ListChangedEventArgs const& o) noexcept = default;
                


// Fields

 System::ComponentModel::ListChangedType __declspec(property(get=__get__ListChangedType_k__BackingField, put=__set__ListChangedType_k__BackingField))  _ListChangedType_k__BackingField;

constexpr void __set__ListChangedType_k__BackingField(System::ComponentModel::ListChangedType value) ;

constexpr System::ComponentModel::ListChangedType __get__ListChangedType_k__BackingField() const;

 int32_t __declspec(property(get=__get__NewIndex_k__BackingField, put=__set__NewIndex_k__BackingField))  _NewIndex_k__BackingField;

constexpr void __set__NewIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__NewIndex_k__BackingField() const;

 int32_t __declspec(property(get=__get__OldIndex_k__BackingField, put=__set__OldIndex_k__BackingField))  _OldIndex_k__BackingField;

constexpr void __set__OldIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__OldIndex_k__BackingField() const;


// Methods

static System::ComponentModel::ListChangedEventArgs New_ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex) ;

/// @brief Method .ctor addr 0x277eb5c size 0x8 virtual false final false
 void _ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex) ;

static System::ComponentModel::ListChangedEventArgs New_ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, int32_t oldIndex) ;

/// @brief Method .ctor addr 0x277eb64 size 0x80 virtual false final false
 void _ctor(System::ComponentModel::ListChangedType listChangedType, int32_t newIndex, int32_t oldIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::ListChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ListChangedEventArgs, "System.ComponentModel", "ListChangedEventArgs");
