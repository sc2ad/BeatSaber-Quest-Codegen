#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class Empty;
}
// Type: System::Empty
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2554))
// CS Name: System.Empty
class CORDL_TYPE Empty : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Empty() = default;

// Ctor Parameters [CppParam { name: "", ty: "Empty", modifiers: " const&", def_value: None }]
constexpr Empty(Empty const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Empty", modifiers: "&&", def_value: None }]
constexpr Empty(Empty&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Empty(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Empty& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Empty& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Empty& operator=(Empty&& o) noexcept = default;
  constexpr Empty& operator=(Empty const& o) noexcept = default;
                


// Fields

static System::Empty __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(System::Empty value) ;

static System::Empty __get_Value() ;


// Methods

static System::Empty New_ctor() ;

/// @brief Method .ctor addr 0x247384c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method ToString addr 0x2473854 size 0x48 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetObjectData addr 0x247389c size 0x6c virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Empty);
DEFINE_IL2CPP_ARG_TYPE(System::Empty, "System", "Empty");
