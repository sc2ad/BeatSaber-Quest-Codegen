#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Globalization {
class CultureNotFoundException;
}
// Type: System.Globalization::CultureNotFoundException
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3645))
// CS Name: System.Globalization.CultureNotFoundException
class CORDL_TYPE CultureNotFoundException : public System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~CultureNotFoundException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureNotFoundException", modifiers: " const&", def_value: None }]
constexpr CultureNotFoundException(CultureNotFoundException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CultureNotFoundException", modifiers: "&&", def_value: None }]
constexpr CultureNotFoundException(CultureNotFoundException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CultureNotFoundException(void* ptr) noexcept : System::ArgumentException(ptr) {
}


  constexpr CultureNotFoundException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CultureNotFoundException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CultureNotFoundException& operator=(CultureNotFoundException&& o) noexcept = default;
  constexpr CultureNotFoundException& operator=(CultureNotFoundException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__invalidCultureName, put=__set__invalidCultureName))  _invalidCultureName;

constexpr void __set__invalidCultureName(::StringW value) ;

constexpr ::StringW __get__invalidCultureName() const;

 System::Nullable_1<int32_t> __declspec(property(get=__get__invalidCultureId, put=__set__invalidCultureId))  _invalidCultureId;

constexpr void __set__invalidCultureId(System::Nullable_1<int32_t> value) ;

constexpr System::Nullable_1<int32_t> __get__invalidCultureId() const;


// Properties

 System::Nullable_1<int32_t> __declspec(property(get=get_InvalidCultureId))  InvalidCultureId;

 ::StringW __declspec(property(get=get_InvalidCultureName))  InvalidCultureName;

static ::StringW __declspec(property(get=get_DefaultMessage))  DefaultMessage;

 ::StringW __declspec(property(get=get_FormatedInvalidCultureId))  FormatedInvalidCultureId;

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

// Ctor Parameters []
explicit CultureNotFoundException() ;

/// @brief Method .ctor addr 0x23dddf8 size 0x4c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "paramName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit CultureNotFoundException(::StringW paramName, ::StringW message) ;

/// @brief Method .ctor addr 0x23dde84 size 0x14 virtual false final false
 void _ctor(::StringW paramName, ::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit CultureNotFoundException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23dde98 size 0x1bc virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x23de054 size 0x164 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_InvalidCultureId addr 0x23de1b8 size 0x8 virtual true final false
 System::Nullable_1<int32_t> get_InvalidCultureId() ;

/// @brief Method get_InvalidCultureName addr 0x23de1c0 size 0x8 virtual true final false
 ::StringW get_InvalidCultureName() ;

/// @brief Method get_DefaultMessage addr 0x23dde44 size 0x40 virtual false final false
static ::StringW get_DefaultMessage() ;

/// @brief Method get_FormatedInvalidCultureId addr 0x23de1c8 size 0x134 virtual false final false
 ::StringW get_FormatedInvalidCultureId() ;

/// @brief Method get_Message addr 0x23de2fc size 0xbc virtual true final false
 ::StringW get_Message() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Globalization
NEED_NO_BOX(System::Globalization::CultureNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CultureNotFoundException, "System.Globalization", "CultureNotFoundException");
