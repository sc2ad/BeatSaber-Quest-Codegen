#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Reflection {
class Missing;
}
// Type: System.Reflection::Missing
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3472))
// CS Name: System.Reflection.Missing
class CORDL_TYPE Missing : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Missing() = default;

// Ctor Parameters [CppParam { name: "", ty: "Missing", modifiers: " const&", def_value: None }]
constexpr Missing(Missing const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Missing", modifiers: "&&", def_value: None }]
constexpr Missing(Missing&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Missing(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Missing& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Missing& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Missing& operator=(Missing&& o) noexcept = default;
  constexpr Missing& operator=(Missing const& o) noexcept = default;
                


// Fields

static System::Reflection::Missing __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(System::Reflection::Missing value) ;

static System::Reflection::Missing __get_Value() ;


// Methods

static System::Reflection::Missing New_ctor() ;

/// @brief Method .ctor addr 0x237b8b4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x237b8bc size 0x40 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::Missing);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Missing, "System.Reflection", "Missing");
