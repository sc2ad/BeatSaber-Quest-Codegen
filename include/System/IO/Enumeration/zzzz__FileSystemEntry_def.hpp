#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
class FileSystemInfo;
}
namespace GlobalNamespace {
struct ______GlobalNamespace__Interop__Sys__DirectoryEntry;
}
namespace System::IO {
struct FileStatus;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
struct FileSystemEntry;
}
namespace System::IO::Enumeration {
struct ____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer;
}
// Type: ::<_fileNameBuffer>e__FixedBuffer
namespace System::IO::Enumeration {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3626))
// CS Name: System.IO.Enumeration.FileSystemEntry::<_fileNameBuffer>e__FixedBuffer
struct CORDL_TYPE ____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr ____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer(char16_t FixedElementField) noexcept;


                    constexpr ____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer(____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer const&) = default;
                    constexpr ____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer(____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer&&) = default;
                    constexpr ____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer& operator=(____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer& operator=(____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x200};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 char16_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(char16_t value) ;

constexpr char16_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
// Type: System.IO.Enumeration::FileSystemEntry
namespace System::IO::Enumeration {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3627))
// CS Name: System.IO.Enumeration.FileSystemEntry
struct CORDL_TYPE FileSystemEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __fileNameBuffer_e__FixedBuffer = ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer;

// Ctor Parameters [CppParam { name: "_directoryEntry", ty: "::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry", modifiers: "", def_value: None }, CppParam { name: "_status", ty: "::System::IO::FileStatus", modifiers: "", def_value: None }, CppParam { name: "_pathBuffer", ty: "::System::Span_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_fullPath", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_fileName", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_fileNameBuffer", ty: "::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "_initialAttributes", ty: "::System::IO::FileAttributes", modifiers: "", def_value: None }, CppParam { name: "_Directory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_RootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }, CppParam { name: "_OriginalRootDirectory_k__BackingField", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: None }]
constexpr FileSystemEntry(::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry _directoryEntry, ::System::IO::FileStatus _status, ::System::Span_1<char16_t> _pathBuffer, ::System::ReadOnlySpan_1<char16_t> _fullPath, ::System::ReadOnlySpan_1<char16_t> _fileName, ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer _fileNameBuffer, ::System::IO::FileAttributes _initialAttributes, ::System::ReadOnlySpan_1<char16_t> _Directory_k__BackingField, ::System::ReadOnlySpan_1<char16_t> _RootDirectory_k__BackingField, ::System::ReadOnlySpan_1<char16_t> _OriginalRootDirectory_k__BackingField) noexcept;


                    constexpr FileSystemEntry(FileSystemEntry const&) = default;
                    constexpr FileSystemEntry(FileSystemEntry&&) = default;
                    constexpr FileSystemEntry& operator=(FileSystemEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FileSystemEntry& operator=(FileSystemEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2f0};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FileSystemEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry __declspec(property(get=__get__directoryEntry, put=__set__directoryEntry))  _directoryEntry;

constexpr void __set__directoryEntry(::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry value) ;

constexpr ::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry __get__directoryEntry() const;

 ::System::IO::FileStatus __declspec(property(get=__get__status, put=__set__status))  _status;

constexpr void __set__status(::System::IO::FileStatus value) ;

constexpr ::System::IO::FileStatus __get__status() const;

 ::System::Span_1<char16_t> __declspec(property(get=__get__pathBuffer, put=__set__pathBuffer))  _pathBuffer;

constexpr void __set__pathBuffer(::System::Span_1<char16_t> value) ;

constexpr ::System::Span_1<char16_t> __get__pathBuffer() const;

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__fullPath, put=__set__fullPath))  _fullPath;

constexpr void __set__fullPath(::System::ReadOnlySpan_1<char16_t> value) ;

constexpr ::System::ReadOnlySpan_1<char16_t> __get__fullPath() const;

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__fileName, put=__set__fileName))  _fileName;

constexpr void __set__fileName(::System::ReadOnlySpan_1<char16_t> value) ;

constexpr ::System::ReadOnlySpan_1<char16_t> __get__fileName() const;

 ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer __declspec(property(get=__get__fileNameBuffer, put=__set__fileNameBuffer))  _fileNameBuffer;

constexpr void __set__fileNameBuffer(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer value) ;

constexpr ::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer __get__fileNameBuffer() const;

 ::System::IO::FileAttributes __declspec(property(get=__get__initialAttributes, put=__set__initialAttributes))  _initialAttributes;

constexpr void __set__initialAttributes(::System::IO::FileAttributes value) ;

constexpr ::System::IO::FileAttributes __get__initialAttributes() const;

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__Directory_k__BackingField, put=__set__Directory_k__BackingField))  _Directory_k__BackingField;

constexpr void __set__Directory_k__BackingField(::System::ReadOnlySpan_1<char16_t> value) ;

constexpr ::System::ReadOnlySpan_1<char16_t> __get__Directory_k__BackingField() const;

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__RootDirectory_k__BackingField, put=__set__RootDirectory_k__BackingField))  _RootDirectory_k__BackingField;

constexpr void __set__RootDirectory_k__BackingField(::System::ReadOnlySpan_1<char16_t> value) ;

constexpr ::System::ReadOnlySpan_1<char16_t> __get__RootDirectory_k__BackingField() const;

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=__get__OriginalRootDirectory_k__BackingField, put=__set__OriginalRootDirectory_k__BackingField))  _OriginalRootDirectory_k__BackingField;

constexpr void __set__OriginalRootDirectory_k__BackingField(::System::ReadOnlySpan_1<char16_t> value) ;

constexpr ::System::ReadOnlySpan_1<char16_t> __get__OriginalRootDirectory_k__BackingField() const;


// Properties

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=get_FullPath))  FullPath;

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=get_FileName))  FileName;

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=get_Directory, put=set_Directory))  Directory;

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=get_RootDirectory, put=set_RootDirectory))  RootDirectory;

 ::System::ReadOnlySpan_1<char16_t> __declspec(property(get=get_OriginalRootDirectory, put=set_OriginalRootDirectory))  OriginalRootDirectory;

 ::System::IO::FileAttributes __declspec(property(get=get_Attributes))  Attributes;

 bool __declspec(property(get=get_IsDirectory))  IsDirectory;


// Methods

/// @brief Method Initialize addr 0x23d55ec size 0x280 virtual false final false
static ::System::IO::FileAttributes Initialize(ByRef<::System::IO::Enumeration::FileSystemEntry> entry, ::GlobalNamespace::______GlobalNamespace__Interop__Sys__DirectoryEntry directoryEntry, ::System::ReadOnlySpan_1<char16_t> directory, ::System::ReadOnlySpan_1<char16_t> rootDirectory, ::System::ReadOnlySpan_1<char16_t> originalRootDirectory, ::System::Span_1<char16_t> pathBuffer) ;

/// @brief Method get_FullPath addr 0x23d586c size 0x130 virtual false final false
 ::System::ReadOnlySpan_1<char16_t> get_FullPath() ;

/// @brief Method get_FileName addr 0x23d599c size 0x94 virtual false final false
 ::System::ReadOnlySpan_1<char16_t> get_FileName() ;

/// @brief Method get_Directory addr 0x23d5a30 size 0x10 virtual false final false
 ::System::ReadOnlySpan_1<char16_t> get_Directory() ;

/// @brief Method set_Directory addr 0x23d5a40 size 0xc virtual false final false
 void set_Directory(::System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method get_RootDirectory addr 0x23d5a4c size 0x10 virtual false final false
 ::System::ReadOnlySpan_1<char16_t> get_RootDirectory() ;

/// @brief Method set_RootDirectory addr 0x23d5a5c size 0xc virtual false final false
 void set_RootDirectory(::System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method get_OriginalRootDirectory addr 0x23d5a68 size 0x10 virtual false final false
 ::System::ReadOnlySpan_1<char16_t> get_OriginalRootDirectory() ;

/// @brief Method set_OriginalRootDirectory addr 0x23d5a78 size 0xc virtual false final false
 void set_OriginalRootDirectory(::System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method get_Attributes addr 0x23d5a84 size 0x48 virtual false final false
 ::System::IO::FileAttributes get_Attributes() ;

/// @brief Method get_IsDirectory addr 0x23d5acc size 0x8 virtual false final false
 bool get_IsDirectory() ;

/// @brief Method ToFileSystemInfo addr 0x23d5ad4 size 0x70 virtual false final false
 ::System::IO::FileSystemInfo ToFileSystemInfo() ;

/// @brief Method ToFullPath addr 0x23d5b44 size 0x28 virtual false final false
 ::StringW ToFullPath() ;

/// @brief Method ToSpecifiedFullPath addr 0x23d5b6c size 0x184 virtual false final false
 ::StringW ToSpecifiedFullPath() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO::Enumeration
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemEntry, "System.IO.Enumeration", "FileSystemEntry");
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::____System__IO__Enumeration__FileSystemEntry____fileNameBuffer_e__FixedBuffer, "System.IO.Enumeration", "FileSystemEntry/<_fileNameBuffer>e__FixedBuffer");
