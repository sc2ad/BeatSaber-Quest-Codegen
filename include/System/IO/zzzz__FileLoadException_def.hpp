#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class FileLoadException;
}
// Type: System.IO::FileLoadException
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3552))
// CS Name: System.IO.FileLoadException
class CORDL_TYPE FileLoadException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~FileLoadException() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileLoadException", modifiers: " const&", def_value: None }]
constexpr FileLoadException(FileLoadException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileLoadException", modifiers: "&&", def_value: None }]
constexpr FileLoadException(FileLoadException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileLoadException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr FileLoadException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileLoadException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileLoadException& operator=(FileLoadException&& o) noexcept = default;
  constexpr FileLoadException& operator=(FileLoadException const& o) noexcept = default;
                


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

static System::IO::FileLoadException New_ctor() ;

/// @brief Method .ctor addr 0x238eff0 size 0x5c virtual false final false
 void _ctor() ;

static System::IO::FileLoadException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x238f04c size 0x24 virtual false final false
 void _ctor(::StringW message) ;

/// @brief Method get_Message addr 0x238f070 size 0x24 virtual true final false
 ::StringW get_Message() ;

/// @brief Method get_FileName addr 0x238f108 size 0x8 virtual false final false
 ::StringW get_FileName() ;

/// @brief Method get_FusionLog addr 0x238f110 size 0x8 virtual false final false
 ::StringW get_FusionLog() ;

/// @brief Method ToString addr 0x238f118 size 0x1e4 virtual true final false
 ::StringW ToString() ;

static System::IO::FileLoadException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x238f2fc size 0xb0 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x238f3ac size 0x118 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method FormatFileLoadExceptionMessage addr 0x238f094 size 0x74 virtual false final false
static ::StringW FormatFileLoadExceptionMessage(::StringW fileName, int32_t hResult) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::FileLoadException);
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileLoadException, "System.IO", "FileLoadException");
