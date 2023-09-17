#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace System::Text {
class Encoding;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandler;
}
// Type: UnityEngine.Networking::DownloadHandler
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15556))
// CS Name: UnityEngine.Networking.DownloadHandler
class CORDL_TYPE DownloadHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DownloadHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandler", modifiers: " const&", def_value: None }]
constexpr DownloadHandler(DownloadHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandler", modifiers: "&&", def_value: None }]
constexpr DownloadHandler(DownloadHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DownloadHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DownloadHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DownloadHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DownloadHandler& operator=(DownloadHandler&& o) noexcept = default;
  constexpr DownloadHandler& operator=(DownloadHandler const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Properties

 ::StringW __declspec(property(get=get_error))  error;

 ::StringW __declspec(property(get=get_text))  text;


// Methods

/// @brief Method Release addr 0x2d36e40 size 0x3c virtual false final false
 void Release() ;

// Ctor Parameters []
explicit DownloadHandler() ;

/// @brief Method .ctor addr 0x2d36e7c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2d36e84 size 0x9c virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2d36f20 size 0x94 virtual true final false
 void Dispose() ;

/// @brief Method get_error addr 0x2d36fb4 size 0x3c virtual false final false
 ::StringW get_error() ;

/// @brief Method GetErrorMsg addr 0x2d36ff0 size 0x3c virtual false final false
 ::StringW GetErrorMsg() ;

/// @brief Method get_text addr 0x2d3702c size 0xc virtual false final false
 ::StringW get_text() ;

/// @brief Method GetNativeData addr 0x2d37038 size 0xc virtual true final false
 ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData() ;

/// @brief Method GetData addr 0x2d37044 size 0x4 virtual true final false
 ::ArrayW<uint8_t> GetData() ;

/// @brief Method GetText addr 0x2d370ec size 0xe8 virtual true final false
 ::StringW GetText() ;

/// @brief Method GetTextEncoder addr 0x2d371d4 size 0x270 virtual false final false
 ::System::Text::Encoding GetTextEncoder() ;

/// @brief Method GetContentType addr 0x2d37444 size 0x3c virtual false final false
 ::StringW GetContentType() ;

/// @brief Method ReceiveContentLengthHeader addr 0x2d37480 size 0xc virtual true final false
 void ReceiveContentLengthHeader(uint64_t contentLength) ;

/// @brief Method ReceiveContentLength addr 0x2d3748c size 0x4 virtual true final false
 void ReceiveContentLength(int32_t contentLength) ;

/// @brief Method GetCheckedDownloader addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetCheckedDownloader(::UnityEngine::Networking::UnityWebRequest www) ;

/// @brief Method InternalGetByteArray addr 0x2d37490 size 0x44 virtual false final false
static void* InternalGetByteArray(::UnityEngine::Networking::DownloadHandler dh, ByRef<int32_t> length) ;

/// @brief Method InternalGetByteArray addr 0x2d37048 size 0xa4 virtual false final false
static ::ArrayW<uint8_t> InternalGetByteArray(::UnityEngine::Networking::DownloadHandler dh) ;

/// @brief Method InternalGetNativeArray addr 0x2d374d4 size 0xbc virtual false final false
static ::Unity::Collections::NativeArray_1<uint8_t> InternalGetNativeArray(::UnityEngine::Networking::DownloadHandler dh, ByRef<::Unity::Collections::NativeArray_1<uint8_t>> nativeArray) ;

/// @brief Method DisposeNativeArray addr 0x2d37590 size 0x54 virtual false final false
static void DisposeNativeArray(ByRef<::Unity::Collections::NativeArray_1<uint8_t>> data) ;

/// @brief Method CreateNativeArrayForNativeData addr 0x2d375e4 size 0x68 virtual false final false
static void CreateNativeArrayForNativeData(ByRef<::Unity::Collections::NativeArray_1<uint8_t>> data, void* bytes, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandler, "UnityEngine.Networking", "DownloadHandler");
