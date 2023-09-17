#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace GlobalNamespace {
struct ______GlobalNamespace__Interop__Sys__FileStatus;
}
namespace System::IO {
struct FileAttributes;
}
namespace System {
struct DateTimeOffset;
}
// Forward declare root types
namespace System::IO {
struct FileStatus;
}
// Type: System.IO::FileStatus
namespace System::IO {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3580))
// CS Name: System.IO.FileStatus
struct CORDL_TYPE FileStatus : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_fileStatus", ty: "::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus", modifiers: "", def_value: None }, CppParam { name: "_fileStatusInitialized", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_InitiallyDirectory_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_isDirectory", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_exists", ty: "bool", modifiers: "", def_value: None }]
constexpr FileStatus(::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus _fileStatus, int32_t _fileStatusInitialized, bool _InitiallyDirectory_k__BackingField, bool _isDirectory, bool _exists) noexcept;


                    constexpr FileStatus(FileStatus const&) = default;
                    constexpr FileStatus(FileStatus&&) = default;
                    constexpr FileStatus& operator=(FileStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FileStatus& operator=(FileStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x78};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FileStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus __declspec(property(get=__get__fileStatus, put=__set__fileStatus))  _fileStatus;

constexpr void __set__fileStatus(::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus value) ;

constexpr ::GlobalNamespace::______GlobalNamespace__Interop__Sys__FileStatus __get__fileStatus() const;

 int32_t __declspec(property(get=__get__fileStatusInitialized, put=__set__fileStatusInitialized))  _fileStatusInitialized;

constexpr void __set__fileStatusInitialized(int32_t value) ;

constexpr int32_t __get__fileStatusInitialized() const;

 bool __declspec(property(get=__get__InitiallyDirectory_k__BackingField, put=__set__InitiallyDirectory_k__BackingField))  _InitiallyDirectory_k__BackingField;

constexpr void __set__InitiallyDirectory_k__BackingField(bool value) ;

constexpr bool __get__InitiallyDirectory_k__BackingField() const;

 bool __declspec(property(get=__get__isDirectory, put=__set__isDirectory))  _isDirectory;

constexpr void __set__isDirectory(bool value) ;

constexpr bool __get__isDirectory() const;

 bool __declspec(property(get=__get__exists, put=__set__exists))  _exists;

constexpr void __set__exists(bool value) ;

constexpr bool __get__exists() const;


// Properties

 bool __declspec(property(get=get_InitiallyDirectory, put=set_InitiallyDirectory))  InitiallyDirectory;


// Methods

/// @brief Method get_InitiallyDirectory addr 0x239e4e0 size 0x8 virtual false final false
 bool get_InitiallyDirectory() ;

/// @brief Method set_InitiallyDirectory addr 0x239e4e8 size 0xc virtual false final false
 void set_InitiallyDirectory(bool value) ;

/// @brief Method Initialize addr 0x239e4f4 size 0x14 virtual false final false
static void Initialize(ByRef<::System::IO::FileStatus> status, bool isDirectory) ;

/// @brief Method IsReadOnly addr 0x239e508 size 0xf0 virtual false final false
 bool IsReadOnly(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError) ;

/// @brief Method GetAttributes addr 0x239e6b4 size 0xe8 virtual false final false
 ::System::IO::FileAttributes GetAttributes(::System::ReadOnlySpan_1<char16_t> path, ::System::ReadOnlySpan_1<char16_t> fileName) ;

/// @brief Method GetExists addr 0x239e79c size 0x44 virtual false final false
 bool GetExists(::System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method GetLastWriteTime addr 0x239e974 size 0x9c virtual false final false
 ::System::DateTimeOffset GetLastWriteTime(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError) ;

/// @brief Method UnixTimeToDateTimeOffset addr 0x239ea10 size 0xb4 virtual false final false
 ::System::DateTimeOffset UnixTimeToDateTimeOffset(int64_t seconds, int64_t nanoseconds) ;

/// @brief Method GetLength addr 0x239eac4 size 0x1c virtual false final false
 int64_t GetLength(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError) ;

/// @brief Method Refresh addr 0x239e7e0 size 0x194 virtual false final false
 void Refresh(::System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method EnsureStatInitialized addr 0x239e5f8 size 0xbc virtual false final false
 void EnsureStatInitialized(::System::ReadOnlySpan_1<char16_t> path, bool continueOnError) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::IO
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStatus, "System.IO", "FileStatus");
