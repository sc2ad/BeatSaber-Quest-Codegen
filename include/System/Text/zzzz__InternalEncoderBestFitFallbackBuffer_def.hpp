#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class InternalEncoderBestFitFallback;
}
// Forward declare root types
namespace System::Text {
class InternalEncoderBestFitFallbackBuffer;
}
// Type: System.Text::InternalEncoderBestFitFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2841))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2836))
// CS Name: System.Text.InternalEncoderBestFitFallbackBuffer
class CORDL_TYPE InternalEncoderBestFitFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~InternalEncoderBestFitFallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallbackBuffer", modifiers: " const&", def_value: None }]
constexpr InternalEncoderBestFitFallbackBuffer(InternalEncoderBestFitFallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallbackBuffer", modifiers: "&&", def_value: None }]
constexpr InternalEncoderBestFitFallbackBuffer(InternalEncoderBestFitFallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalEncoderBestFitFallbackBuffer(void* ptr) noexcept : ::System::Text::EncoderFallbackBuffer(ptr) {
}


  constexpr InternalEncoderBestFitFallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalEncoderBestFitFallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalEncoderBestFitFallbackBuffer& operator=(InternalEncoderBestFitFallbackBuffer&& o) noexcept = default;
  constexpr InternalEncoderBestFitFallbackBuffer& operator=(InternalEncoderBestFitFallbackBuffer const& o) noexcept = default;
                


// Fields

 char16_t __declspec(property(get=__get__cBestFit, put=__set__cBestFit))  _cBestFit;

constexpr void __set__cBestFit(char16_t value) ;

constexpr char16_t __get__cBestFit() const;

 ::System::Text::InternalEncoderBestFitFallback __declspec(property(get=__get__oFallback, put=__set__oFallback))  _oFallback;

constexpr void __set__oFallback(::System::Text::InternalEncoderBestFitFallback value) ;

constexpr ::System::Text::InternalEncoderBestFitFallback __get__oFallback() const;

 int32_t __declspec(property(get=__get__iCount, put=__set__iCount))  _iCount;

constexpr void __set__iCount(int32_t value) ;

constexpr int32_t __get__iCount() const;

 int32_t __declspec(property(get=__get__iSize, put=__set__iSize))  _iSize;

constexpr void __set__iSize(int32_t value) ;

constexpr int32_t __get__iSize() const;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_InternalSyncObject, put=__set_s_InternalSyncObject))  s_InternalSyncObject;

static void __set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_InternalSyncObject() ;


// Properties

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_InternalSyncObject))  InternalSyncObject;

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

/// @brief Method get_InternalSyncObject addr 0x24c5114 size 0x9c virtual false final false
static ::bs_hook::Il2CppWrapperType get_InternalSyncObject() ;

// Ctor Parameters [CppParam { name: "fallback", ty: "::System::Text::InternalEncoderBestFitFallback", modifiers: "", def_value: None }]
explicit InternalEncoderBestFitFallbackBuffer(::System::Text::InternalEncoderBestFitFallback fallback) ;

/// @brief Method .ctor addr 0x24c4efc size 0x128 virtual false final false
 void _ctor(::System::Text::InternalEncoderBestFitFallback fallback) ;

/// @brief Method Fallback addr 0x24c51b8 size 0x30 virtual true final false
 bool Fallback(char16_t charUnknown, int32_t index) ;

/// @brief Method Fallback addr 0x24c52bc size 0x1e0 virtual true final false
 bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) ;

/// @brief Method GetNextChar addr 0x24c549c size 0x40 virtual true final false
 char16_t GetNextChar() ;

/// @brief Method MovePrevious addr 0x24c54dc size 0x2c virtual true final false
 bool MovePrevious() ;

/// @brief Method get_Remaining addr 0x24c5508 size 0xc virtual true final false
 int32_t get_Remaining() ;

/// @brief Method Reset addr 0x24c5514 size 0x14 virtual true final false
 void Reset() ;

/// @brief Method TryBestFit addr 0x24c51e8 size 0xd4 virtual false final false
 char16_t TryBestFit(char16_t cUnknown) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::InternalEncoderBestFitFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalEncoderBestFitFallbackBuffer, "System.Text", "InternalEncoderBestFitFallbackBuffer");
