#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class FileNotFoundException;
}
// Type: System.IO::FileNotFoundException
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3554))
// CS Name: System.IO.FileNotFoundException
class CORDL_TYPE FileNotFoundException : public ::System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~FileNotFoundException() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileNotFoundException", modifiers: " const&", def_value: None }]
constexpr FileNotFoundException(FileNotFoundException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileNotFoundException", modifiers: "&&", def_value: None }]
constexpr FileNotFoundException(FileNotFoundException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileNotFoundException(void* ptr) noexcept : ::System::IO::IOException(ptr) {
}


  constexpr FileNotFoundException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileNotFoundException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileNotFoundException& operator=(FileNotFoundException&& o) noexcept = default;
  constexpr FileNotFoundException& operator=(FileNotFoundException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__FileName_k__BackingField, put=__set__FileName_k__BackingField))  _FileName_k__BackingField;

constexpr void __set__FileName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__FileName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__FusionLog_k__BackingField, put=__set__FusionLog_k__BackingField))  _FusionLog_k__BackingField;

constexpr void __set__FusionLog_k__BackingField(::StringW value) ;

constexpr ::StringW __get__FusionLog_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;

 ::StringW __declspec(property(get=get_FileName))  FileName;

 ::StringW __declspec(property(get=get_FusionLog))  FusionLog;


// Methods

// Ctor Parameters []
explicit FileNotFoundException() ;

/// @brief Method .ctor addr 0x238f4c4 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit FileNotFoundException(::StringW message) ;

/// @brief Method .ctor addr 0x238f520 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: None }]
explicit FileNotFoundException(::StringW message, ::StringW fileName) ;

/// @brief Method .ctor addr 0x238f544 size 0x34 virtual false final false
 void _ctor(::StringW message, ::StringW fileName) ;

/// @brief Method get_Message addr 0x238f578 size 0x18 virtual true final false
 ::StringW get_Message() ;

/// @brief Method SetMessageField addr 0x238f590 size 0x78 virtual false final false
 void SetMessageField() ;

/// @brief Method get_FileName addr 0x238f608 size 0x8 virtual false final false
 ::StringW get_FileName() ;

/// @brief Method get_FusionLog addr 0x238f610 size 0x8 virtual false final false
 ::StringW get_FusionLog() ;

/// @brief Method ToString addr 0x238f618 size 0x1e4 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit FileNotFoundException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x238f7fc size 0xb0 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x238f8ac size 0x118 virtual true final false
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
NEED_NO_BOX(::System::IO::FileNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileNotFoundException, "System.IO", "FileNotFoundException");
