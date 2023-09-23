#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine {
struct AudioType;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerAudioClip;
}
// Type: UnityEngine.Networking::DownloadHandlerAudioClip
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15994))
// CS Name: UnityEngine.Networking.DownloadHandlerAudioClip
class CORDL_TYPE DownloadHandlerAudioClip : public UnityEngine::Networking::DownloadHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DownloadHandlerAudioClip() = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: " const&", def_value: None }]
constexpr DownloadHandlerAudioClip(DownloadHandlerAudioClip const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerAudioClip", modifiers: "&&", def_value: None }]
constexpr DownloadHandlerAudioClip(DownloadHandlerAudioClip&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DownloadHandlerAudioClip(void* ptr) noexcept : UnityEngine::Networking::DownloadHandler(ptr) {
}


  constexpr DownloadHandlerAudioClip& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DownloadHandlerAudioClip& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DownloadHandlerAudioClip& operator=(DownloadHandlerAudioClip&& o) noexcept = default;
  constexpr DownloadHandlerAudioClip& operator=(DownloadHandlerAudioClip const& o) noexcept = default;
                


// Fields

 Unity::Collections::NativeArray_1<uint8_t> __declspec(property(get=__get_m_NativeData, put=__set_m_NativeData))  m_NativeData;

constexpr void __set_m_NativeData(Unity::Collections::NativeArray_1<uint8_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint8_t> __get_m_NativeData() const;


// Properties

 UnityEngine::AudioClip __declspec(property(get=get_audioClip))  audioClip;

 bool __declspec(property(put=set_streamAudio))  streamAudio;


// Methods

/// @brief Method Create addr 0x2d33b30 size 0x54 virtual false final false
static ::cordl_internals::intptr_t Create(UnityEngine::Networking::DownloadHandlerAudioClip obj, ::StringW url, UnityEngine::AudioType audioType) ;

/// @brief Method InternalCreateAudioClip addr 0x2d33b84 size 0x5c virtual false final false
 void InternalCreateAudioClip(::StringW url, UnityEngine::AudioType audioType) ;

// Ctor Parameters [CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "audioType", ty: "UnityEngine::AudioType", modifiers: "", def_value: None }]
explicit DownloadHandlerAudioClip(::StringW url, UnityEngine::AudioType audioType) ;

/// @brief Method .ctor addr 0x2d33acc size 0x64 virtual false final false
 void _ctor(::StringW url, UnityEngine::AudioType audioType) ;

/// @brief Method GetNativeData addr 0x2d33be0 size 0xc virtual true final false
 Unity::Collections::NativeArray_1<uint8_t> GetNativeData() ;

/// @brief Method Dispose addr 0x2d33bec size 0x24 virtual true final false
 void Dispose() ;

/// @brief Method GetText addr 0x2d33c10 size 0x50 virtual true final false
 ::StringW GetText() ;

/// @brief Method get_audioClip addr 0x2d33c60 size 0x3c virtual false final false
 UnityEngine::AudioClip get_audioClip() ;

/// @brief Method set_streamAudio addr 0x2d33c9c size 0x44 virtual false final false
 void set_streamAudio(bool value) ;

/// @brief Method GetContent addr 0x2d33ce0 size 0x7c virtual false final false
static UnityEngine::AudioClip GetContent(UnityEngine::Networking::UnityWebRequest www) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::DownloadHandlerAudioClip);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerAudioClip, "UnityEngine.Networking", "DownloadHandlerAudioClip");
