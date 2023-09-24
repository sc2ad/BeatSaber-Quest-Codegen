#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ValueTypeFixupInfo;
}
// Type: System.Runtime.Serialization::ValueTypeFixupInfo
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3207))
// CS Name: System.Runtime.Serialization.ValueTypeFixupInfo
class CORDL_TYPE ValueTypeFixupInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ValueTypeFixupInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueTypeFixupInfo", modifiers: " const&", def_value: None }]
constexpr ValueTypeFixupInfo(ValueTypeFixupInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValueTypeFixupInfo", modifiers: "&&", def_value: None }]
constexpr ValueTypeFixupInfo(ValueTypeFixupInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValueTypeFixupInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValueTypeFixupInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValueTypeFixupInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValueTypeFixupInfo& operator=(ValueTypeFixupInfo&& o) noexcept = default;
  constexpr ValueTypeFixupInfo& operator=(ValueTypeFixupInfo const& o) noexcept = default;
                


// Fields

 int64_t __declspec(property(get=__get__containerID, put=__set__containerID))  _containerID;

constexpr void __set__containerID(int64_t value) ;

constexpr int64_t __get__containerID() const;

 System::Reflection::FieldInfo __declspec(property(get=__get__parentField, put=__set__parentField))  _parentField;

constexpr void __set__parentField(System::Reflection::FieldInfo value) ;

constexpr System::Reflection::FieldInfo __get__parentField() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__parentIndex, put=__set__parentIndex))  _parentIndex;

constexpr void __set__parentIndex(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__parentIndex() const;


// Properties

 int64_t __declspec(property(get=get_ContainerID))  ContainerID;

 System::Reflection::FieldInfo __declspec(property(get=get_ParentField))  ParentField;

 ::ArrayW<int32_t> __declspec(property(get=get_ParentIndex))  ParentIndex;


// Methods

static System::Runtime::Serialization::ValueTypeFixupInfo New_ctor(int64_t containerID, System::Reflection::FieldInfo member, ::ArrayW<int32_t> parentIndex) ;

/// @brief Method .ctor addr 0x2349968 size 0x150 virtual false final false
 void _ctor(int64_t containerID, System::Reflection::FieldInfo member, ::ArrayW<int32_t> parentIndex) ;

/// @brief Method get_ContainerID addr 0x2349ab8 size 0x8 virtual false final false
 int64_t get_ContainerID() ;

/// @brief Method get_ParentField addr 0x2349ac0 size 0x8 virtual false final false
 System::Reflection::FieldInfo get_ParentField() ;

/// @brief Method get_ParentIndex addr 0x2349ac8 size 0x8 virtual false final false
 ::ArrayW<int32_t> get_ParentIndex() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(System::Runtime::Serialization::ValueTypeFixupInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ValueTypeFixupInfo, "System.Runtime.Serialization", "ValueTypeFixupInfo");
