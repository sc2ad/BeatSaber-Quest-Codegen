#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class Pointer;
}
// Type: System.Reflection::Pointer
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3477))
// CS Name: System.Reflection.Pointer
class CORDL_TYPE Pointer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Pointer() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: " const&", def_value: None }]
constexpr Pointer(Pointer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pointer", modifiers: "&&", def_value: None }]
constexpr Pointer(Pointer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pointer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pointer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pointer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pointer& operator=(Pointer&& o) noexcept = default;
  constexpr Pointer& operator=(Pointer const& o) noexcept = default;
                


// Fields

 void* __declspec(property(get=__get__ptr, put=__set__ptr))  _ptr;

constexpr void __set__ptr(void* value) ;

constexpr void* __get__ptr() const;

 ::System::Type __declspec(property(get=__get__ptrType, put=__set__ptrType))  _ptrType;

constexpr void __set__ptrType(::System::Type value) ;

constexpr ::System::Type __get__ptrType() const;


// Methods

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "ptrType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit Pointer(void* ptr, ::System::Type ptrType) ;

/// @brief Method .ctor addr 0x237c608 size 0x2c virtual false final false
 void _ctor(void* ptr, ::System::Type ptrType) ;

/// @brief Method Box addr 0x237c634 size 0x188 virtual false final false
static ::bs_hook::Il2CppWrapperType Box(void* ptr, ::System::Type type) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x237c7bc size 0x40 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::Pointer);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Pointer, "System.Reflection", "Pointer");
