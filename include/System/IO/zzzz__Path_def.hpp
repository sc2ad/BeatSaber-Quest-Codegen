#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::IO {
class System__IO__Path____c;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
struct ValueTuple_8;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
// Forward declare root types
namespace System::IO {
class Path;
}
namespace System::IO {
class System__IO__Path____c;
}
// Type: ::<>c
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3618))
// CS Name: System.IO.Path::<>c
class CORDL_TYPE System__IO__Path____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__IO__Path____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Path____c", modifiers: " const&", def_value: None }]
constexpr System__IO__Path____c(System__IO__Path____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__IO__Path____c", modifiers: "&&", def_value: None }]
constexpr System__IO__Path____c(System__IO__Path____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__IO__Path____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__IO__Path____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__IO__Path____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__IO__Path____c& operator=(System__IO__Path____c&& o) noexcept = default;
  constexpr System__IO__Path____c& operator=(System__IO__Path____c const& o) noexcept = default;
                


// Fields

static System::IO::System__IO__Path____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::IO::System__IO__Path____c value) ;

static System::IO::System__IO__Path____c __get___9() ;

static System::Buffers::SpanAction_2<char16_t,System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>> __declspec(property(get=__get___9__56_0, put=__set___9__56_0))  __9__56_0;

static void __set___9__56_0(System::Buffers::SpanAction_2<char16_t,System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>> value) ;

static System::Buffers::SpanAction_2<char16_t,System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool>> __get___9__56_0() ;

static System::Buffers::SpanAction_2<char16_t,System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,System::ValueTuple_1<bool>>> __declspec(property(get=__get___9__57_0, put=__set___9__57_0))  __9__57_0;

static void __set___9__57_0(System::Buffers::SpanAction_2<char16_t,System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,System::ValueTuple_1<bool>>> value) ;

static System::Buffers::SpanAction_2<char16_t,System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,System::ValueTuple_1<bool>>> __get___9__57_0() ;


// Methods

static System::IO::System__IO__Path____c New_ctor() ;

/// @brief Method .ctor addr 0x23d3958 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <JoinInternal>b__56_0 addr 0x23d3960 size 0x1a0 virtual false final false
 void _JoinInternal_b__56_0(System::Span_1<char16_t> destination, System::ValueTuple_5<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool> state) ;

/// @brief Method <JoinInternal>b__57_0 addr 0x23d3b00 size 0x264 virtual false final false
 void _JoinInternal_b__57_0(System::Span_1<char16_t> destination, System::ValueTuple_8<::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,::cordl_internals::intptr_t,int32_t,bool,System::ValueTuple_1<bool>> state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
// Type: System.IO::Path
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3619))
// CS Name: System.IO.Path
class CORDL_TYPE Path : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = System::IO::System__IO__Path____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Path() = default;

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: " const&", def_value: None }]
constexpr Path(Path const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "&&", def_value: None }]
constexpr Path(Path&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Path(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Path& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Path& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Path& operator=(Path&& o) noexcept = default;
  constexpr Path& operator=(Path const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_InvalidPathChars, put=__set_InvalidPathChars))  InvalidPathChars;

static void __set_InvalidPathChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_InvalidPathChars() ;

static char16_t __declspec(property(get=__get_AltDirectorySeparatorChar, put=__set_AltDirectorySeparatorChar))  AltDirectorySeparatorChar;

static void __set_AltDirectorySeparatorChar(char16_t value) ;

static char16_t __get_AltDirectorySeparatorChar() ;

static char16_t __declspec(property(get=__get_DirectorySeparatorChar, put=__set_DirectorySeparatorChar))  DirectorySeparatorChar;

static void __set_DirectorySeparatorChar(char16_t value) ;

static char16_t __get_DirectorySeparatorChar() ;

static char16_t __declspec(property(get=__get_PathSeparator, put=__set_PathSeparator))  PathSeparator;

static void __set_PathSeparator(char16_t value) ;

static char16_t __get_PathSeparator() ;

static ::StringW __declspec(property(get=__get_DirectorySeparatorStr, put=__set_DirectorySeparatorStr))  DirectorySeparatorStr;

static void __set_DirectorySeparatorStr(::StringW value) ;

static ::StringW __get_DirectorySeparatorStr() ;

static char16_t __declspec(property(get=__get_VolumeSeparatorChar, put=__set_VolumeSeparatorChar))  VolumeSeparatorChar;

static void __set_VolumeSeparatorChar(char16_t value) ;

static char16_t __get_VolumeSeparatorChar() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_PathSeparatorChars, put=__set_PathSeparatorChars))  PathSeparatorChars;

static void __set_PathSeparatorChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_PathSeparatorChars() ;

static bool __declspec(property(get=__get_dirEqualsVolume, put=__set_dirEqualsVolume))  dirEqualsVolume;

static void __set_dirEqualsVolume(bool value) ;

static bool __get_dirEqualsVolume() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_trimEndCharsWindows, put=__set_trimEndCharsWindows))  trimEndCharsWindows;

static void __set_trimEndCharsWindows(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_trimEndCharsWindows() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_trimEndCharsUnix, put=__set_trimEndCharsUnix))  trimEndCharsUnix;

static void __set_trimEndCharsUnix(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_trimEndCharsUnix() ;


// Methods

/// @brief Method ChangeExtension addr 0x23d0e44 size 0x1fc virtual false final false
static ::StringW ChangeExtension(::StringW path, ::StringW extension) ;

/// @brief Method Combine addr 0x23d10d4 size 0x26c virtual false final false
static ::StringW Combine(::StringW path1, ::StringW path2) ;

/// @brief Method CleanPath addr 0x23d1468 size 0x440 virtual false final false
static ::StringW CleanPath(::StringW s) ;

/// @brief Method GetDirectoryName addr 0x23ccc8c size 0x360 virtual false final false
static ::StringW GetDirectoryName(::StringW path) ;

/// @brief Method GetDirectoryName addr 0x23d1cd8 size 0xd0 virtual false final false
static System::ReadOnlySpan_1<char16_t> GetDirectoryName(System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method GetExtension addr 0x23d1da8 size 0x12c virtual false final false
static ::StringW GetExtension(::StringW path) ;

/// @brief Method GetFileName addr 0x23c8170 size 0x110 virtual false final false
static ::StringW GetFileName(::StringW path) ;

/// @brief Method GetFileNameWithoutExtension addr 0x23d1ed4 size 0x5c virtual false final false
static ::StringW GetFileNameWithoutExtension(::StringW path) ;

/// @brief Method GetFullPath addr 0x23ccfec size 0x68 virtual false final false
static ::StringW GetFullPath(::StringW path) ;

/// @brief Method GetFullPathInternal addr 0x23d1f30 size 0x54 virtual false final false
static ::StringW GetFullPathInternal(::StringW path) ;

/// @brief Method InsecureGetFullPath addr 0x23cc590 size 0x654 virtual false final false
static ::StringW InsecureGetFullPath(::StringW path) ;

/// @brief Method IsDirectorySeparator addr 0x23c80e4 size 0x8c virtual false final false
static bool IsDirectorySeparator(char16_t c) ;

/// @brief Method GetPathRoot addr 0x23d18a8 size 0x430 virtual false final false
static ::StringW GetPathRoot(::StringW path) ;

/// @brief Method GetTempPath addr 0x23d23a4 size 0xe8 virtual false final false
static ::StringW GetTempPath() ;

/// @brief Method get_temp_path addr 0x23d248c size 0x4 virtual false final false
static ::StringW get_temp_path() ;

/// @brief Method IsPathRooted addr 0x23d2490 size 0x104 virtual false final false
static bool IsPathRooted(System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method IsPathRooted addr 0x23d1340 size 0x128 virtual false final false
static bool IsPathRooted(::StringW path) ;

/// @brief Method GetInvalidPathChars addr 0x23d2594 size 0x94 virtual false final false
static ::ArrayW<char16_t> GetInvalidPathChars() ;

/// @brief Method GetRandomFileName addr 0x23d2628 size 0x164 virtual false final false
static ::StringW GetRandomFileName() ;

/// @brief Method findExtension addr 0x23d1040 size 0x94 virtual false final false
static int32_t findExtension(::StringW path) ;

/// @brief Method CanonicalizePath addr 0x23d1f84 size 0x420 virtual false final false
static ::StringW CanonicalizePath(::StringW path) ;

/// @brief Method Combine addr 0x23d2934 size 0x2ec virtual false final false
static ::StringW Combine(::ArrayW<::StringW> paths) ;

/// @brief Method Combine addr 0x23d2c20 size 0x1a8 virtual false final false
static ::StringW Combine(::StringW path1, ::StringW path2, ::StringW path3) ;

/// @brief Method GetFileName addr 0x23d2dc8 size 0x14c virtual false final false
static System::ReadOnlySpan_1<char16_t> GetFileName(System::ReadOnlySpan_1<char16_t> path) ;

/// @brief Method Join addr 0x23d2f14 size 0xb8 virtual false final false
static ::StringW Join(System::ReadOnlySpan_1<char16_t> path1, System::ReadOnlySpan_1<char16_t> path2) ;

/// @brief Method Join addr 0x23d3248 size 0x110 virtual false final false
static ::StringW Join(System::ReadOnlySpan_1<char16_t> path1, System::ReadOnlySpan_1<char16_t> path2, System::ReadOnlySpan_1<char16_t> path3) ;

/// @brief Method TryJoin addr 0x23d36c0 size 0x234 virtual false final false
static bool TryJoin(System::ReadOnlySpan_1<char16_t> path1, System::ReadOnlySpan_1<char16_t> path2, System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten) ;

/// @brief Method JoinInternal addr 0x23d2fcc size 0x27c virtual false final false
static ::StringW JoinInternal(System::ReadOnlySpan_1<char16_t> first, System::ReadOnlySpan_1<char16_t> second) ;

/// @brief Method JoinInternal addr 0x23d3358 size 0x368 virtual false final false
static ::StringW JoinInternal(System::ReadOnlySpan_1<char16_t> first, System::ReadOnlySpan_1<char16_t> second, System::ReadOnlySpan_1<char16_t> third) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::Path);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Path, "System.IO", "Path");
NEED_NO_BOX(System::IO::System__IO__Path____c);
DEFINE_IL2CPP_ARG_TYPE(System::IO::System__IO__Path____c, "System.IO", "Path/<>c");
