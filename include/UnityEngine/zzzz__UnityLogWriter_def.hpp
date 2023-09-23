#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace UnityEngine {
class UnityLogWriter;
}
// Type: UnityEngine::UnityLogWriter
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9995))
// CS Name: UnityEngine.UnityLogWriter
class CORDL_TYPE UnityLogWriter : public System::IO::TextWriter {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityLogWriter() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogWriter", modifiers: " const&", def_value: None }]
constexpr UnityLogWriter(UnityLogWriter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityLogWriter", modifiers: "&&", def_value: None }]
constexpr UnityLogWriter(UnityLogWriter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityLogWriter(void* ptr) noexcept : System::IO::TextWriter(ptr) {
}


  constexpr UnityLogWriter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityLogWriter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityLogWriter& operator=(UnityLogWriter&& o) noexcept = default;
  constexpr UnityLogWriter& operator=(UnityLogWriter const& o) noexcept = default;
                


// Properties

 System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;


// Methods

/// @brief Method WriteStringToUnityLog addr 0x2b2b64c size 0x44 virtual false final false
static void WriteStringToUnityLog(::StringW s) ;

/// @brief Method WriteStringToUnityLogImpl addr 0x2b2b690 size 0x3c virtual false final false
static void WriteStringToUnityLogImpl(::StringW s) ;

/// @brief Method Init addr 0x2b2b6cc size 0x80 virtual false final false
static void Init() ;

/// @brief Method get_Encoding addr 0x2b2b7a4 size 0x8 virtual true final false
 System::Text::Encoding get_Encoding() ;

/// @brief Method Write addr 0x2b2b7ac size 0x54 virtual true final false
 void Write(char16_t value) ;

/// @brief Method Write addr 0x2b2b800 size 0x44 virtual true final false
 void Write(::StringW s) ;

/// @brief Method Write addr 0x2b2b844 size 0x48 virtual true final false
 void Write(::ArrayW<char16_t> buffer, int32_t index, int32_t count) ;

// Ctor Parameters []
explicit UnityLogWriter() ;

/// @brief Method .ctor addr 0x2b2b74c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::UnityLogWriter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityLogWriter, "UnityEngine", "UnityLogWriter");
