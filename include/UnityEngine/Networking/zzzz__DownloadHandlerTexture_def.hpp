#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include <cstdint>
namespace UnityEngine {
class Texture2D;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerTexture;
}
// Type: UnityEngine.Networking::DownloadHandlerTexture
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15987))
// CS Name: UnityEngine.Networking.DownloadHandlerTexture
class CORDL_TYPE DownloadHandlerTexture : public UnityEngine::Networking::DownloadHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DownloadHandlerTexture() = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture", modifiers: " const&", def_value: None }]
constexpr DownloadHandlerTexture(DownloadHandlerTexture const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerTexture", modifiers: "&&", def_value: None }]
constexpr DownloadHandlerTexture(DownloadHandlerTexture&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DownloadHandlerTexture(void* ptr) noexcept : UnityEngine::Networking::DownloadHandler(ptr) {
}


  constexpr DownloadHandlerTexture& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DownloadHandlerTexture& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DownloadHandlerTexture& operator=(DownloadHandlerTexture&& o) noexcept = default;
  constexpr DownloadHandlerTexture& operator=(DownloadHandlerTexture const& o) noexcept = default;
                


// Fields

 Unity::Collections::NativeArray_1<uint8_t> __declspec(property(get=__get_m_NativeData, put=__set_m_NativeData))  m_NativeData;

constexpr void __set_m_NativeData(Unity::Collections::NativeArray_1<uint8_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint8_t> __get_m_NativeData() const;

 UnityEngine::Texture2D __declspec(property(get=__get_mTexture, put=__set_mTexture))  mTexture;

constexpr void __set_mTexture(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_mTexture() const;

 bool __declspec(property(get=__get_mHasTexture, put=__set_mHasTexture))  mHasTexture;

constexpr void __set_mHasTexture(bool value) ;

constexpr bool __get_mHasTexture() const;

 bool __declspec(property(get=__get_mNonReadable, put=__set_mNonReadable))  mNonReadable;

constexpr void __set_mNonReadable(bool value) ;

constexpr bool __get_mNonReadable() const;


// Properties

 UnityEngine::Texture2D __declspec(property(get=get_texture))  texture;


// Methods

/// @brief Method Create addr 0x2d37938 size 0x44 virtual false final false
static ::cordl_internals::intptr_t Create(UnityEngine::Networking::DownloadHandlerTexture obj, bool readable) ;

/// @brief Method InternalCreateTexture addr 0x2d3797c size 0x4c virtual false final false
 void InternalCreateTexture(bool readable) ;

static UnityEngine::Networking::DownloadHandlerTexture New_ctor(bool readable) ;

/// @brief Method .ctor addr 0x2d378d8 size 0x60 virtual false final false
 void _ctor(bool readable) ;

/// @brief Method GetNativeData addr 0x2d379c8 size 0xc virtual true final false
 Unity::Collections::NativeArray_1<uint8_t> GetNativeData() ;

/// @brief Method Dispose addr 0x2d379d4 size 0x24 virtual true final false
 void Dispose() ;

/// @brief Method get_texture addr 0x2d379f8 size 0x4 virtual false final false
 UnityEngine::Texture2D get_texture() ;

/// @brief Method InternalGetTexture addr 0x2d379fc size 0x110 virtual false final false
 UnityEngine::Texture2D InternalGetTexture() ;

/// @brief Method InternalGetTextureNative addr 0x2d37b0c size 0x3c virtual false final false
 UnityEngine::Texture2D InternalGetTextureNative() ;

/// @brief Method GetContent addr 0x2d37b48 size 0x54 virtual false final false
static UnityEngine::Texture2D GetContent(UnityEngine::Networking::UnityWebRequest www) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::DownloadHandlerTexture);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerTexture, "UnityEngine.Networking", "DownloadHandlerTexture");
