#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Networking/zzzz__DownloadHandler_def.hpp"
#include <cstdint>
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Networking {
class DownloadHandlerBuffer;
}
// Type: UnityEngine.Networking::DownloadHandlerBuffer
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15556))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15557))
// CS Name: UnityEngine.Networking.DownloadHandlerBuffer
class CORDL_TYPE DownloadHandlerBuffer : public UnityEngine::Networking::DownloadHandler {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DownloadHandlerBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerBuffer", modifiers: " const&", def_value: None }]
constexpr DownloadHandlerBuffer(DownloadHandlerBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DownloadHandlerBuffer", modifiers: "&&", def_value: None }]
constexpr DownloadHandlerBuffer(DownloadHandlerBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DownloadHandlerBuffer(void* ptr) noexcept : UnityEngine::Networking::DownloadHandler(ptr) {
}


  constexpr DownloadHandlerBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DownloadHandlerBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DownloadHandlerBuffer& operator=(DownloadHandlerBuffer&& o) noexcept = default;
  constexpr DownloadHandlerBuffer& operator=(DownloadHandlerBuffer const& o) noexcept = default;
                


// Fields

 Unity::Collections::NativeArray_1<uint8_t> __declspec(property(get=__get_m_NativeData, put=__set_m_NativeData))  m_NativeData;

constexpr void __set_m_NativeData(Unity::Collections::NativeArray_1<uint8_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint8_t> __get_m_NativeData() const;


// Methods

/// @brief Method Create addr 0x2d3764c size 0x3c virtual false final false
static ::cordl_internals::intptr_t Create(UnityEngine::Networking::DownloadHandlerBuffer obj) ;

/// @brief Method InternalCreateBuffer addr 0x2d37688 size 0x44 virtual false final false
 void InternalCreateBuffer() ;

// Ctor Parameters []
explicit DownloadHandlerBuffer() ;

/// @brief Method .ctor addr 0x2d36cfc size 0x4c virtual false final false
 void _ctor() ;

/// @brief Method GetNativeData addr 0x2d376cc size 0x8 virtual true final false
 Unity::Collections::NativeArray_1<uint8_t> GetNativeData() ;

/// @brief Method Dispose addr 0x2d376d4 size 0x1c virtual true final false
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Networking
NEED_NO_BOX(UnityEngine::Networking::DownloadHandlerBuffer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerBuffer, "UnityEngine.Networking", "DownloadHandlerBuffer");
