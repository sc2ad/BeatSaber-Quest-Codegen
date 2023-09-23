#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct TextureFormat;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::Profiling::Experimental {
struct DebugScreenCapture;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::Profiling::Memory::Experimental {
class MetaData;
}
// Forward declare root types
namespace UnityEngine::Profiling::Memory::Experimental {
class MemoryProfiler;
}
// Type: UnityEngine.Profiling.Memory.Experimental::MemoryProfiler
namespace UnityEngine::Profiling::Memory::Experimental {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10235))
// CS Name: UnityEngine.Profiling.Memory.Experimental.MemoryProfiler
class CORDL_TYPE MemoryProfiler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MemoryProfiler() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryProfiler", modifiers: " const&", def_value: None }]
constexpr MemoryProfiler(MemoryProfiler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryProfiler", modifiers: "&&", def_value: None }]
constexpr MemoryProfiler(MemoryProfiler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryProfiler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryProfiler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryProfiler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryProfiler& operator=(MemoryProfiler&& o) noexcept = default;
  constexpr MemoryProfiler& operator=(MemoryProfiler const& o) noexcept = default;
                


// Fields

static System::Action_2<::StringW,bool> __declspec(property(get=__get_m_SnapshotFinished, put=__set_m_SnapshotFinished))  m_SnapshotFinished;

static void __set_m_SnapshotFinished(System::Action_2<::StringW,bool> value) ;

static System::Action_2<::StringW,bool> __get_m_SnapshotFinished() ;

static System::Action_3<::StringW,bool,UnityEngine::Profiling::Experimental::DebugScreenCapture> __declspec(property(get=__get_m_SaveScreenshotToDisk, put=__set_m_SaveScreenshotToDisk))  m_SaveScreenshotToDisk;

static void __set_m_SaveScreenshotToDisk(System::Action_3<::StringW,bool,UnityEngine::Profiling::Experimental::DebugScreenCapture> value) ;

static System::Action_3<::StringW,bool,UnityEngine::Profiling::Experimental::DebugScreenCapture> __get_m_SaveScreenshotToDisk() ;

static System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData> __declspec(property(get=__get_createMetaData, put=__set_createMetaData))  createMetaData;

static void __set_createMetaData(System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData> value) ;

static System::Action_1<UnityEngine::Profiling::Memory::Experimental::MetaData> __get_createMetaData() ;


// Methods

/// @brief Method PrepareMetadata addr 0x2b6ea94 size 0x174 virtual false final false
static ::ArrayW<uint8_t> PrepareMetadata() ;

/// @brief Method WriteIntToByteArray addr 0x2b6ec08 size 0x8c virtual false final false
static int32_t WriteIntToByteArray(::ArrayW<uint8_t> array, int32_t offset, int32_t value) ;

/// @brief Method WriteStringToByteArray addr 0x2b6ec94 size 0x98 virtual false final false
static int32_t WriteStringToByteArray(::ArrayW<uint8_t> array, int32_t offset, ::StringW value) ;

/// @brief Method FinalizeSnapshot addr 0x2b6ed2c size 0x84 virtual false final false
static void FinalizeSnapshot(::StringW path, bool result) ;

/// @brief Method SaveScreenshotToDisk addr 0x2b6edb0 size 0xfc virtual false final false
static void SaveScreenshotToDisk(::StringW path, bool result, ::cordl_internals::intptr_t pixelsPtr, int32_t pixelsCount, UnityEngine::TextureFormat format, int32_t width, int32_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Profiling::Memory::Experimental
NEED_NO_BOX(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Profiling::Memory::Experimental::MemoryProfiler, "UnityEngine.Profiling.Memory.Experimental", "MemoryProfiler");
