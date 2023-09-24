#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class EnumerationOptions;
}
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__ErrorInfo;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__DirectoryEntry;
}
// Forward declare root types
namespace System::IO::Enumeration {
template<typename TResult>
class FileSystemEnumerator_1;
}
namespace System::IO::Enumeration {
template<::cordl_internals::il2cpp_reference_type TResult>
class FileSystemEnumerator_1<TResult>;
}
// Type: System.IO.Enumeration::FileSystemEnumerator`1
// Type: System.IO.Enumeration::FileSystemEnumerator`1
namespace System::IO::Enumeration {
// cpp template
template<::cordl_internals::il2cpp_reference_type TResult>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3347)), TypeDefinitionIndex(TypeDefinitionIndex(3640))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3640), inst: 2 })
// CS Name: System.IO.Enumeration.FileSystemEnumerator`1
class CORDL_TYPE FileSystemEnumerator_1<TResult> : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<TResult>
constexpr operator  System::Collections::Generic::IEnumerator_1<TResult>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~FileSystemEnumerator_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerator_1", modifiers: " const&", def_value: None }]
constexpr FileSystemEnumerator_1(FileSystemEnumerator_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileSystemEnumerator_1", modifiers: "&&", def_value: None }]
constexpr FileSystemEnumerator_1(FileSystemEnumerator_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileSystemEnumerator_1(void* ptr) noexcept : System::Runtime::ConstrainedExecution::CriticalFinalizerObject(ptr) {
}


  constexpr FileSystemEnumerator_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileSystemEnumerator_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileSystemEnumerator_1& operator=(FileSystemEnumerator_1&& o) noexcept = default;
  constexpr FileSystemEnumerator_1& operator=(FileSystemEnumerator_1 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__originalRootDirectory, put=__set__originalRootDirectory))  _originalRootDirectory;

constexpr void __set__originalRootDirectory(::StringW value) ;

constexpr ::StringW __get__originalRootDirectory() const;

 ::StringW __declspec(property(get=__get__rootDirectory, put=__set__rootDirectory))  _rootDirectory;

constexpr void __set__rootDirectory(::StringW value) ;

constexpr ::StringW __get__rootDirectory() const;

 System::IO::EnumerationOptions __declspec(property(get=__get__options, put=__set__options))  _options;

constexpr void __set__options(System::IO::EnumerationOptions value) ;

constexpr System::IO::EnumerationOptions __get__options() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__lock, put=__set__lock))  _lock;

constexpr void __set__lock(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__lock() const;

 ::StringW __declspec(property(get=__get__currentPath, put=__set__currentPath))  _currentPath;

constexpr void __set__currentPath(::StringW value) ;

constexpr ::StringW __get__currentPath() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get__directoryHandle, put=__set__directoryHandle))  _directoryHandle;

constexpr void __set__directoryHandle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__directoryHandle() const;

 bool __declspec(property(get=__get__lastEntryFound, put=__set__lastEntryFound))  _lastEntryFound;

constexpr void __set__lastEntryFound(bool value) ;

constexpr bool __get__lastEntryFound() const;

 System::Collections::Generic::Queue_1<::StringW> __declspec(property(get=__get__pending, put=__set__pending))  _pending;

constexpr void __set__pending(System::Collections::Generic::Queue_1<::StringW> value) ;

constexpr System::Collections::Generic::Queue_1<::StringW> __get__pending() const;

 GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry __declspec(property(get=__get__entry, put=__set__entry))  _entry;

constexpr void __set__entry(GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry value) ;

constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry __get__entry() const;

 TResult __declspec(property(get=__get__current, put=__set__current))  _current;

constexpr void __set__current(TResult value) ;

constexpr TResult __get__current() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__pathBuffer, put=__set__pathBuffer))  _pathBuffer;

constexpr void __set__pathBuffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__pathBuffer() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get__entryBuffer, put=__set__entryBuffer))  _entryBuffer;

constexpr void __set__entryBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__entryBuffer() const;


// Properties

 TResult __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static System::IO::Enumeration::FileSystemEnumerator_1<TResult> New_ctor(::StringW directory, System::IO::EnumerationOptions options) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW directory, System::IO::EnumerationOptions options) ;

/// @brief Method InternalContinueOnError addr 0x0 size 0xffffffffffffffff virtual false final false
 bool InternalContinueOnError(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo info, bool ignoreNotFound) ;

/// @brief Method IsDirectoryNotFound addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsDirectoryNotFound(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo info) ;

/// @brief Method IsAccessError addr 0x0 size 0xffffffffffffffff virtual false final false
static bool IsAccessError(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo info) ;

/// @brief Method CreateDirectoryHandle addr 0x0 size 0xffffffffffffffff virtual false final false
 ::cordl_internals::intptr_t CreateDirectoryHandle(::StringW path, bool ignoreNotFound) ;

/// @brief Method CloseDirectoryHandle addr 0x0 size 0xffffffffffffffff virtual false final false
 void CloseDirectoryHandle() ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method FindNextEntry addr 0x0 size 0xffffffffffffffff virtual false final false
 void FindNextEntry() ;

/// @brief Method FindNextEntry addr 0x0 size 0xffffffffffffffff virtual false final false
 void FindNextEntry(void* entryBufferPtr, int32_t bufferLength) ;

/// @brief Method DequeueNextDirectory addr 0x0 size 0xffffffffffffffff virtual false final false
 bool DequeueNextDirectory() ;

/// @brief Method InternalDispose addr 0x0 size 0xffffffffffffffff virtual false final false
 void InternalDispose(bool disposing) ;

/// @brief Method ShouldIncludeEntry addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ShouldIncludeEntry(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method ShouldRecurseIntoEntry addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ShouldRecurseIntoEntry(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method TransformEntry addr 0x0 size 0xffffffffffffffff virtual true final false
 TResult TransformEntry(ByRef<System::IO::Enumeration::FileSystemEntry> entry) ;

/// @brief Method OnDirectoryFinished addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDirectoryFinished(System::ReadOnlySpan_1<char16_t> directory) ;

/// @brief Method ContinueOnError addr 0x0 size 0xffffffffffffffff virtual true final false
 bool ContinueOnError(int32_t error) ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 TResult get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method DirectoryFinished addr 0x0 size 0xffffffffffffffff virtual false final false
 void DirectoryFinished() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IO::Enumeration::FileSystemEnumerator_1, "System.IO.Enumeration", "FileSystemEnumerator`1");
