#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class TypeName;
}
// Forward declare root types
namespace System {
class System__TypeNames__ATypeName;
}
namespace System {
class TypeNames;
}
// Type: ::ATypeName
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2628))
// CS Name: System.TypeNames::ATypeName
class CORDL_TYPE System__TypeNames__ATypeName : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::TypeName
constexpr operator  System::TypeName() const noexcept;

/// @brief Convert operator to System::IEquatable_1<System::TypeName>
constexpr operator  System::IEquatable_1<System::TypeName>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__TypeNames__ATypeName() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TypeNames__ATypeName", modifiers: " const&", def_value: None }]
constexpr System__TypeNames__ATypeName(System__TypeNames__ATypeName const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__TypeNames__ATypeName", modifiers: "&&", def_value: None }]
constexpr System__TypeNames__ATypeName(System__TypeNames__ATypeName&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__TypeNames__ATypeName(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__TypeNames__ATypeName& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__TypeNames__ATypeName& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__TypeNames__ATypeName& operator=(System__TypeNames__ATypeName&& o) noexcept = default;
  constexpr System__TypeNames__ATypeName& operator=(System__TypeNames__ATypeName const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_DisplayName))  DisplayName;


// Methods

/// @brief Method get_DisplayName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_DisplayName() ;

/// @brief Method Equals addr 0x24982c8 size 0xd0 virtual true final true
 bool Equals(System::TypeName other) ;

/// @brief Method GetHashCode addr 0x2498398 size 0x28 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x24983c0 size 0x60 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType other) ;

// Ctor Parameters []
explicit System__TypeNames__ATypeName() ;

/// @brief Method .ctor addr 0x2498420 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::TypeNames
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2629))
// CS Name: System.TypeNames
class CORDL_TYPE TypeNames : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ATypeName = System::System__TypeNames__ATypeName;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeNames() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeNames", modifiers: " const&", def_value: None }]
constexpr TypeNames(TypeNames const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeNames", modifiers: "&&", def_value: None }]
constexpr TypeNames(TypeNames&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeNames(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeNames& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeNames& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeNames& operator=(TypeNames&& o) noexcept = default;
  constexpr TypeNames& operator=(TypeNames const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::System__TypeNames__ATypeName);
DEFINE_IL2CPP_ARG_TYPE(System::System__TypeNames__ATypeName, "System", "TypeNames/ATypeName");
NEED_NO_BOX(System::TypeNames);
DEFINE_IL2CPP_ARG_TYPE(System::TypeNames, "System", "TypeNames");
