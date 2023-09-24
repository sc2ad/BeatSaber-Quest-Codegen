#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
struct MonoIOError;
}
namespace System::Runtime::InteropServices {
class SafeHandle;
}
namespace System::IO {
struct FileMode;
}
namespace System {
class Exception;
}
namespace System::IO {
struct FileOptions;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct MonoFileType;
}
// Forward declare root types
namespace System::IO {
class MonoIO;
}
// Type: System.IO::MonoIO
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3615))
// CS Name: System.IO.MonoIO
class CORDL_TYPE MonoIO : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MonoIO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoIO", modifiers: " const&", def_value: None }]
constexpr MonoIO(MonoIO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoIO", modifiers: "&&", def_value: None }]
constexpr MonoIO(MonoIO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoIO(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoIO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoIO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoIO& operator=(MonoIO&& o) noexcept = default;
  constexpr MonoIO& operator=(MonoIO const& o) noexcept = default;
                


// Fields

static ::cordl_internals::intptr_t __declspec(property(get=__get_InvalidHandle, put=__set_InvalidHandle))  InvalidHandle;

static void __set_InvalidHandle(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_InvalidHandle() ;

static bool __declspec(property(get=__get_dump_handles, put=__set_dump_handles))  dump_handles;

static void __set_dump_handles(bool value) ;

static bool __get_dump_handles() ;


// Properties

static ::cordl_internals::intptr_t __declspec(property(get=get_ConsoleOutput))  ConsoleOutput;

static ::cordl_internals::intptr_t __declspec(property(get=get_ConsoleInput))  ConsoleInput;

static ::cordl_internals::intptr_t __declspec(property(get=get_ConsoleError))  ConsoleError;

static char16_t __declspec(property(get=get_VolumeSeparatorChar))  VolumeSeparatorChar;

static char16_t __declspec(property(get=get_DirectorySeparatorChar))  DirectorySeparatorChar;

static char16_t __declspec(property(get=get_AltDirectorySeparatorChar))  AltDirectorySeparatorChar;

static char16_t __declspec(property(get=get_PathSeparator))  PathSeparator;


// Methods

/// @brief Method GetException addr 0x23d0b14 size 0x130 virtual false final false
static System::Exception GetException(System::IO::MonoIOError error) ;

/// @brief Method GetException addr 0x23cd168 size 0x71c virtual false final false
static System::Exception GetException(::StringW path, System::IO::MonoIOError error) ;

/// @brief Method GetCurrentDirectory addr 0x23d0c48 size 0x4 virtual false final false
static ::StringW GetCurrentDirectory(ByRef<System::IO::MonoIOError> error) ;

/// @brief Method GetFileType addr 0x23d0c4c size 0x4 virtual false final false
static System::IO::MonoFileType GetFileType(::cordl_internals::intptr_t handle, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method GetFileType addr 0x23cd884 size 0x128 virtual false final false
static System::IO::MonoFileType GetFileType(System::Runtime::InteropServices::SafeHandle safeHandle, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Open addr 0x23d0c50 size 0x4 virtual false final false
static ::cordl_internals::intptr_t Open(void* filename, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, System::IO::FileOptions options, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Open addr 0x23cd054 size 0x9c virtual false final false
static ::cordl_internals::intptr_t Open(::StringW filename, System::IO::FileMode mode, System::IO::FileAccess access, System::IO::FileShare share, System::IO::FileOptions options, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Cancel_internal addr 0x23d0c54 size 0x4 virtual false final false
static bool Cancel_internal(::cordl_internals::intptr_t handle, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Cancel addr 0x23d0c58 size 0x128 virtual false final false
static bool Cancel(System::Runtime::InteropServices::SafeHandle safeHandle, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Close addr 0x23d07e4 size 0x4 virtual false final false
static bool Close(::cordl_internals::intptr_t handle, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Read addr 0x23d0d80 size 0x4 virtual false final false
static int32_t Read(::cordl_internals::intptr_t handle, ::ArrayW<uint8_t> dest, int32_t dest_offset, int32_t count, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Read addr 0x23d0878 size 0x148 virtual false final false
static int32_t Read(System::Runtime::InteropServices::SafeHandle safeHandle, ::ArrayW<uint8_t> dest, int32_t dest_offset, int32_t count, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Write addr 0x23d0d84 size 0x4 virtual false final false
static int32_t Write(::cordl_internals::intptr_t handle, ByRefConst<::ArrayW<uint8_t>> src, int32_t src_offset, int32_t count, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Write addr 0x23cf578 size 0x148 virtual false final false
static int32_t Write(System::Runtime::InteropServices::SafeHandle safeHandle, ::ArrayW<uint8_t> src, int32_t src_offset, int32_t count, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Seek addr 0x23d0d88 size 0x4 virtual false final false
static int64_t Seek(::cordl_internals::intptr_t handle, int64_t offset, System::IO::SeekOrigin origin, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method Seek addr 0x23cdc60 size 0x140 virtual false final false
static int64_t Seek(System::Runtime::InteropServices::SafeHandle safeHandle, int64_t offset, System::IO::SeekOrigin origin, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method GetLength addr 0x23d0d8c size 0x4 virtual false final false
static int64_t GetLength(::cordl_internals::intptr_t handle, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method GetLength addr 0x23cdf44 size 0x128 virtual false final false
static int64_t GetLength(System::Runtime::InteropServices::SafeHandle safeHandle, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method SetLength addr 0x23d0d90 size 0x4 virtual false final false
static bool SetLength(::cordl_internals::intptr_t handle, int64_t length, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method SetLength addr 0x23d0264 size 0x130 virtual false final false
static bool SetLength(System::Runtime::InteropServices::SafeHandle safeHandle, int64_t length, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method get_ConsoleOutput addr 0x23d0d94 size 0x4 virtual false final false
static ::cordl_internals::intptr_t get_ConsoleOutput() ;

/// @brief Method get_ConsoleInput addr 0x23d0d98 size 0x4 virtual false final false
static ::cordl_internals::intptr_t get_ConsoleInput() ;

/// @brief Method get_ConsoleError addr 0x23d0d9c size 0x4 virtual false final false
static ::cordl_internals::intptr_t get_ConsoleError() ;

/// @brief Method CreatePipe addr 0x23d0da0 size 0x4 virtual false final false
static bool CreatePipe(ByRef<::cordl_internals::intptr_t> read_handle, ByRef<::cordl_internals::intptr_t> write_handle, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method DuplicateHandle addr 0x23d0da4 size 0x4 virtual false final false
static bool DuplicateHandle(::cordl_internals::intptr_t source_process_handle, ::cordl_internals::intptr_t source_handle, ::cordl_internals::intptr_t target_process_handle, ByRef<::cordl_internals::intptr_t> target_handle, int32_t access, int32_t inherit, int32_t options, ByRef<System::IO::MonoIOError> error) ;

/// @brief Method get_VolumeSeparatorChar addr 0x23d0da8 size 0x4 virtual false final false
static char16_t get_VolumeSeparatorChar() ;

/// @brief Method get_DirectorySeparatorChar addr 0x23d0dac size 0x4 virtual false final false
static char16_t get_DirectorySeparatorChar() ;

/// @brief Method get_AltDirectorySeparatorChar addr 0x23d0db0 size 0x4 virtual false final false
static char16_t get_AltDirectorySeparatorChar() ;

/// @brief Method get_PathSeparator addr 0x23d0db4 size 0x4 virtual false final false
static char16_t get_PathSeparator() ;

/// @brief Method DumpHandles addr 0x23d0c44 size 0x4 virtual false final false
static void DumpHandles() ;

/// @brief Method RemapPath addr 0x23d0db8 size 0x4 virtual false final false
static bool RemapPath(::StringW path, ByRef<::StringW> newPath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::MonoIO);
DEFINE_IL2CPP_ARG_TYPE(System::IO::MonoIO, "System.IO", "MonoIO");
