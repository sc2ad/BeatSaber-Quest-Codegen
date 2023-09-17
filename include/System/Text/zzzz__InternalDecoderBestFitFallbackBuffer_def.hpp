#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class InternalDecoderBestFitFallback;
}
// Forward declare root types
namespace System::Text {
class InternalDecoderBestFitFallbackBuffer;
}
// Type: System.Text::InternalDecoderBestFitFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2825))
// CS Name: System.Text.InternalDecoderBestFitFallbackBuffer
class CORDL_TYPE InternalDecoderBestFitFallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~InternalDecoderBestFitFallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallbackBuffer", modifiers: " const&", def_value: None }]
constexpr InternalDecoderBestFitFallbackBuffer(InternalDecoderBestFitFallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallbackBuffer", modifiers: "&&", def_value: None }]
constexpr InternalDecoderBestFitFallbackBuffer(InternalDecoderBestFitFallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalDecoderBestFitFallbackBuffer(void* ptr) noexcept : ::System::Text::DecoderFallbackBuffer(ptr) {
}


  constexpr InternalDecoderBestFitFallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalDecoderBestFitFallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalDecoderBestFitFallbackBuffer& operator=(InternalDecoderBestFitFallbackBuffer&& o) noexcept = default;
  constexpr InternalDecoderBestFitFallbackBuffer& operator=(InternalDecoderBestFitFallbackBuffer const& o) noexcept = default;
                


// Fields

 char16_t __declspec(property(get=__get__cBestFit, put=__set__cBestFit))  _cBestFit;

constexpr void __set__cBestFit(char16_t value) ;

constexpr char16_t __get__cBestFit() const;

 int32_t __declspec(property(get=__get__iCount, put=__set__iCount))  _iCount;

constexpr void __set__iCount(int32_t value) ;

constexpr int32_t __get__iCount() const;

 int32_t __declspec(property(get=__get__iSize, put=__set__iSize))  _iSize;

constexpr void __set__iSize(int32_t value) ;

constexpr int32_t __get__iSize() const;

 ::System::Text::InternalDecoderBestFitFallback __declspec(property(get=__get__oFallback, put=__set__oFallback))  _oFallback;

constexpr void __set__oFallback(::System::Text::InternalDecoderBestFitFallback value) ;

constexpr ::System::Text::InternalDecoderBestFitFallback __get__oFallback() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_InternalSyncObject, put=__set_s_InternalSyncObject))  s_InternalSyncObject;

static void __set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_InternalSyncObject() ;


// Properties

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_InternalSyncObject))  InternalSyncObject;

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

/// @brief Method get_InternalSyncObject addr 0x24c2858 size 0x9c virtual false final false
static ::bs_hook::Il2CppWrapperType get_InternalSyncObject() ;

// Ctor Parameters [CppParam { name: "fallback", ty: "::System::Text::InternalDecoderBestFitFallback", modifiers: "", def_value: None }]
explicit InternalDecoderBestFitFallbackBuffer(::System::Text::InternalDecoderBestFitFallback fallback) ;

/// @brief Method .ctor addr 0x24c265c size 0x128 virtual false final false
 void _ctor(::System::Text::InternalDecoderBestFitFallback fallback) ;

/// @brief Method Fallback addr 0x24c28fc size 0x40 virtual true final false
 bool Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) ;

/// @brief Method GetNextChar addr 0x24c2a7c size 0x40 virtual true final false
 char16_t GetNextChar() ;

/// @brief Method get_Remaining addr 0x24c2abc size 0xc virtual true final false
 int32_t get_Remaining() ;

/// @brief Method Reset addr 0x24c2ac8 size 0x10 virtual true final false
 void Reset() ;

/// @brief Method InternalFallback addr 0x24c2ad8 size 0x8 virtual true final false
 int32_t InternalFallback(::ArrayW<uint8_t> bytes, void* pBytes) ;

/// @brief Method TryBestFit addr 0x24c293c size 0x140 virtual false final false
 char16_t TryBestFit(::ArrayW<uint8_t> bytesCheck) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::InternalDecoderBestFitFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalDecoderBestFitFallbackBuffer, "System.Text", "InternalDecoderBestFitFallbackBuffer");
