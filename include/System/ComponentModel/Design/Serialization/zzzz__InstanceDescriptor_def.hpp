#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class ICollection;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace System::ComponentModel::Design::Serialization {
class InstanceDescriptor;
}
// Type: System.ComponentModel.Design.Serialization::InstanceDescriptor
namespace System::ComponentModel::Design::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8355))
// CS Name: System.ComponentModel.Design.Serialization.InstanceDescriptor
class CORDL_TYPE InstanceDescriptor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InstanceDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDescriptor", modifiers: " const&", def_value: None }]
constexpr InstanceDescriptor(InstanceDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstanceDescriptor", modifiers: "&&", def_value: None }]
constexpr InstanceDescriptor(InstanceDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstanceDescriptor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InstanceDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstanceDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstanceDescriptor& operator=(InstanceDescriptor&& o) noexcept = default;
  constexpr InstanceDescriptor& operator=(InstanceDescriptor const& o) noexcept = default;
                


// Fields

 System::Collections::ICollection __declspec(property(get=__get__Arguments_k__BackingField, put=__set__Arguments_k__BackingField))  _Arguments_k__BackingField;

constexpr void __set__Arguments_k__BackingField(System::Collections::ICollection value) ;

constexpr System::Collections::ICollection __get__Arguments_k__BackingField() const;

 bool __declspec(property(get=__get__IsComplete_k__BackingField, put=__set__IsComplete_k__BackingField))  _IsComplete_k__BackingField;

constexpr void __set__IsComplete_k__BackingField(bool value) ;

constexpr bool __get__IsComplete_k__BackingField() const;

 System::Reflection::MemberInfo __declspec(property(get=__get__MemberInfo_k__BackingField, put=__set__MemberInfo_k__BackingField))  _MemberInfo_k__BackingField;

constexpr void __set__MemberInfo_k__BackingField(System::Reflection::MemberInfo value) ;

constexpr System::Reflection::MemberInfo __get__MemberInfo_k__BackingField() const;


// Properties

 System::Collections::ICollection __declspec(property(get=get_Arguments))  Arguments;

 System::Reflection::MemberInfo __declspec(property(get=get_MemberInfo))  MemberInfo;


// Methods

static System::ComponentModel::Design::Serialization::InstanceDescriptor New_ctor(System::Reflection::MemberInfo member, System::Collections::ICollection arguments) ;

/// @brief Method .ctor addr 0x27a8218 size 0x8 virtual false final false
 void _ctor(System::Reflection::MemberInfo member, System::Collections::ICollection arguments) ;

static System::ComponentModel::Design::Serialization::InstanceDescriptor New_ctor(System::Reflection::MemberInfo member, System::Collections::ICollection arguments, bool isComplete) ;

/// @brief Method .ctor addr 0x27a8220 size 0x50c virtual false final false
 void _ctor(System::Reflection::MemberInfo member, System::Collections::ICollection arguments, bool isComplete) ;

/// @brief Method get_Arguments addr 0x27a872c size 0x8 virtual false final false
 System::Collections::ICollection get_Arguments() ;

/// @brief Method get_MemberInfo addr 0x27a8734 size 0x8 virtual false final false
 System::Reflection::MemberInfo get_MemberInfo() ;

/// @brief Method Invoke addr 0x27a873c size 0x358 virtual false final false
 ::bs_hook::Il2CppWrapperType Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design::Serialization
NEED_NO_BOX(System::ComponentModel::Design::Serialization::InstanceDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::Serialization::InstanceDescriptor, "System.ComponentModel.Design.Serialization", "InstanceDescriptor");
