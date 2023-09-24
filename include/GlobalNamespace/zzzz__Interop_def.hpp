#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__Permissions;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__DirectoryEntry;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__NodeType;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__FileStatus;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__FileStatusFlags;
}
namespace Microsoft::Win32::SafeHandles {
class SafeFileHandle;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__ErrorInfo;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Exception;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Error;
}
namespace GlobalNamespace {
class GlobalNamespace__Interop__Sys;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Error;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__FileStatusFlags;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__NodeType;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__Permissions;
}
namespace GlobalNamespace {
class GlobalNamespace__Interop__Sys;
}
namespace GlobalNamespace {
class Interop;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__ErrorInfo;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__DirectoryEntry;
}
namespace GlobalNamespace {
struct GlobalNamespace__Interop__Sys__FileStatus;
}
// Type: ::Error
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2211))
// CS Name: Interop::Error
struct CORDL_TYPE GlobalNamespace__Interop__Error : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__Interop__Error(int32_t value__) noexcept;


                    constexpr GlobalNamespace__Interop__Error(GlobalNamespace__Interop__Error const&) = default;
                    constexpr GlobalNamespace__Interop__Error(GlobalNamespace__Interop__Error&&) = default;
                    constexpr GlobalNamespace__Interop__Error& operator=(GlobalNamespace__Interop__Error const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__Interop__Error& operator=(GlobalNamespace__Interop__Error&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__Interop__Error(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__Interop__Error_Unwrapped : int32_t {
__SUCCESS = 0,
__E2BIG = 65537,
__EACCES = 65538,
__EADDRINUSE = 65539,
__EADDRNOTAVAIL = 65540,
__EAFNOSUPPORT = 65541,
__EAGAIN = 65542,
__EALREADY = 65543,
__EBADF = 65544,
__EBADMSG = 65545,
__EBUSY = 65546,
__ECANCELED = 65547,
__ECHILD = 65548,
__ECONNABORTED = 65549,
__ECONNREFUSED = 65550,
__ECONNRESET = 65551,
__EDEADLK = 65552,
__EDESTADDRREQ = 65553,
__EDOM = 65554,
__EDQUOT = 65555,
__EEXIST = 65556,
__EFAULT = 65557,
__EFBIG = 65558,
__EHOSTUNREACH = 65559,
__EIDRM = 65560,
__EILSEQ = 65561,
__EINPROGRESS = 65562,
__EINTR = 65563,
__EINVAL = 65564,
__EIO = 65565,
__EISCONN = 65566,
__EISDIR = 65567,
__ELOOP = 65568,
__EMFILE = 65569,
__EMLINK = 65570,
__EMSGSIZE = 65571,
__EMULTIHOP = 65572,
__ENAMETOOLONG = 65573,
__ENETDOWN = 65574,
__ENETRESET = 65575,
__ENETUNREACH = 65576,
__ENFILE = 65577,
__ENOBUFS = 65578,
__ENODEV = 65580,
__ENOENT = 65581,
__ENOEXEC = 65582,
__ENOLCK = 65583,
__ENOLINK = 65584,
__ENOMEM = 65585,
__ENOMSG = 65586,
__ENOPROTOOPT = 65587,
__ENOSPC = 65588,
__ENOSYS = 65591,
__ENOTCONN = 65592,
__ENOTDIR = 65593,
__ENOTEMPTY = 65594,
__ENOTSOCK = 65596,
__ENOTSUP = 65597,
__ENOTTY = 65598,
__ENXIO = 65599,
__EOVERFLOW = 65600,
__EPERM = 65602,
__EPIPE = 65603,
__EPROTO = 65604,
__EPROTONOSUPPORT = 65605,
__EPROTOTYPE = 65606,
__ERANGE = 65607,
__EROFS = 65608,
__ESPIPE = 65609,
__ESRCH = 65610,
__ESTALE = 65611,
__ETIMEDOUT = 65613,
__ETXTBSY = 65614,
__EXDEV = 65615,
__ESOCKTNOSUPPORT = 65630,
__EPFNOSUPPORT = 65632,
__ESHUTDOWN = 65644,
__EHOSTDOWN = 65648,
__ENODATA = 65649,
__EOPNOTSUPP = 65597,
__EWOULDBLOCK = 65542,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__Interop__Error_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__Interop__Error_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SUCCESS offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const SUCCESS;

/// @brief Field E2BIG offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const E2BIG;

/// @brief Field EACCES offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EACCES;

/// @brief Field EADDRINUSE offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EADDRINUSE;

/// @brief Field EADDRNOTAVAIL offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EADDRNOTAVAIL;

/// @brief Field EAFNOSUPPORT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EAFNOSUPPORT;

/// @brief Field EAGAIN offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EAGAIN;

/// @brief Field EALREADY offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EALREADY;

/// @brief Field EBADF offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EBADF;

/// @brief Field EBADMSG offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EBADMSG;

/// @brief Field EBUSY offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EBUSY;

/// @brief Field ECANCELED offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ECANCELED;

/// @brief Field ECHILD offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ECHILD;

/// @brief Field ECONNABORTED offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ECONNABORTED;

/// @brief Field ECONNREFUSED offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ECONNREFUSED;

/// @brief Field ECONNRESET offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ECONNRESET;

/// @brief Field EDEADLK offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EDEADLK;

/// @brief Field EDESTADDRREQ offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EDESTADDRREQ;

/// @brief Field EDOM offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EDOM;

/// @brief Field EDQUOT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EDQUOT;

/// @brief Field EEXIST offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EEXIST;

/// @brief Field EFAULT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EFAULT;

/// @brief Field EFBIG offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EFBIG;

/// @brief Field EHOSTUNREACH offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EHOSTUNREACH;

/// @brief Field EIDRM offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EIDRM;

/// @brief Field EILSEQ offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EILSEQ;

/// @brief Field EINPROGRESS offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EINPROGRESS;

/// @brief Field EINTR offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EINTR;

/// @brief Field EINVAL offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EINVAL;

/// @brief Field EIO offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EIO;

/// @brief Field EISCONN offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EISCONN;

/// @brief Field EISDIR offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EISDIR;

/// @brief Field ELOOP offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ELOOP;

/// @brief Field EMFILE offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EMFILE;

/// @brief Field EMLINK offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EMLINK;

/// @brief Field EMSGSIZE offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EMSGSIZE;

/// @brief Field EMULTIHOP offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EMULTIHOP;

/// @brief Field ENAMETOOLONG offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENAMETOOLONG;

/// @brief Field ENETDOWN offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENETDOWN;

/// @brief Field ENETRESET offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENETRESET;

/// @brief Field ENETUNREACH offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENETUNREACH;

/// @brief Field ENFILE offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENFILE;

/// @brief Field ENOBUFS offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOBUFS;

/// @brief Field ENODEV offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENODEV;

/// @brief Field ENOENT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOENT;

/// @brief Field ENOEXEC offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOEXEC;

/// @brief Field ENOLCK offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOLCK;

/// @brief Field ENOLINK offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOLINK;

/// @brief Field ENOMEM offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOMEM;

/// @brief Field ENOMSG offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOMSG;

/// @brief Field ENOPROTOOPT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOPROTOOPT;

/// @brief Field ENOSPC offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOSPC;

/// @brief Field ENOSYS offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOSYS;

/// @brief Field ENOTCONN offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOTCONN;

/// @brief Field ENOTDIR offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOTDIR;

/// @brief Field ENOTEMPTY offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOTEMPTY;

/// @brief Field ENOTSOCK offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOTSOCK;

/// @brief Field ENOTSUP offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOTSUP;

/// @brief Field ENOTTY offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENOTTY;

/// @brief Field ENXIO offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENXIO;

/// @brief Field EOVERFLOW offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EOVERFLOW;

/// @brief Field EPERM offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EPERM;

/// @brief Field EPIPE offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EPIPE;

/// @brief Field EPROTO offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EPROTO;

/// @brief Field EPROTONOSUPPORT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EPROTONOSUPPORT;

/// @brief Field EPROTOTYPE offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EPROTOTYPE;

/// @brief Field ERANGE offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ERANGE;

/// @brief Field EROFS offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EROFS;

/// @brief Field ESPIPE offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ESPIPE;

/// @brief Field ESRCH offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ESRCH;

/// @brief Field ESTALE offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ESTALE;

/// @brief Field ETIMEDOUT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ETIMEDOUT;

/// @brief Field ETXTBSY offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ETXTBSY;

/// @brief Field EXDEV offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EXDEV;

/// @brief Field ESOCKTNOSUPPORT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ESOCKTNOSUPPORT;

/// @brief Field EPFNOSUPPORT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EPFNOSUPPORT;

/// @brief Field ESHUTDOWN offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ESHUTDOWN;

/// @brief Field EHOSTDOWN offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EHOSTDOWN;

/// @brief Field ENODATA offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const ENODATA;

/// @brief Field EOPNOTSUPP offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EOPNOTSUPP;

/// @brief Field EWOULDBLOCK offset 0
static GlobalNamespace::GlobalNamespace__Interop__Error const EWOULDBLOCK;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ErrorInfo
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2212))
// CS Name: Interop::ErrorInfo
struct CORDL_TYPE GlobalNamespace__Interop__ErrorInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_error", ty: "GlobalNamespace::GlobalNamespace__Interop__Error", modifiers: "", def_value: None }, CppParam { name: "_rawErrno", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__Interop__ErrorInfo(GlobalNamespace::GlobalNamespace__Interop__Error _error, int32_t _rawErrno) noexcept;


                    constexpr GlobalNamespace__Interop__ErrorInfo(GlobalNamespace__Interop__ErrorInfo const&) = default;
                    constexpr GlobalNamespace__Interop__ErrorInfo(GlobalNamespace__Interop__ErrorInfo&&) = default;
                    constexpr GlobalNamespace__Interop__ErrorInfo& operator=(GlobalNamespace__Interop__ErrorInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__Interop__ErrorInfo& operator=(GlobalNamespace__Interop__ErrorInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__Interop__ErrorInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::GlobalNamespace__Interop__Error __declspec(property(get=__get__error, put=__set__error))  _error;

constexpr void __set__error(GlobalNamespace::GlobalNamespace__Interop__Error value) ;

constexpr GlobalNamespace::GlobalNamespace__Interop__Error __get__error() const;

 int32_t __declspec(property(get=__get__rawErrno, put=__set__rawErrno))  _rawErrno;

constexpr void __set__rawErrno(int32_t value) ;

constexpr int32_t __get__rawErrno() const;


// Properties

 GlobalNamespace::GlobalNamespace__Interop__Error __declspec(property(get=get_Error))  Error;

 int32_t __declspec(property(get=get_RawErrno))  RawErrno;


// Methods

/// @brief Method .ctor addr 0x22a39e4 size 0x68 virtual false final false
 void _ctor(int32_t errno) ;

/// @brief Method .ctor addr 0x22a3a50 size 0xc virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__Interop__Error error) ;

/// @brief Method get_Error addr 0x22a3a5c size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__Interop__Error get_Error() ;

/// @brief Method get_RawErrno addr 0x22a38ac size 0x6c virtual false final false
 int32_t get_RawErrno() ;

/// @brief Method GetErrorMessage addr 0x22a3918 size 0x64 virtual false final false
 ::StringW GetErrorMessage() ;

/// @brief Method ToString addr 0x22a3bdc size 0xd4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NodeType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2213))
// CS Name: Interop::Sys::NodeType
struct CORDL_TYPE GlobalNamespace__Interop__Sys__NodeType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__Interop__Sys__NodeType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__Interop__Sys__NodeType(GlobalNamespace__Interop__Sys__NodeType const&) = default;
                    constexpr GlobalNamespace__Interop__Sys__NodeType(GlobalNamespace__Interop__Sys__NodeType&&) = default;
                    constexpr GlobalNamespace__Interop__Sys__NodeType& operator=(GlobalNamespace__Interop__Sys__NodeType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__Interop__Sys__NodeType& operator=(GlobalNamespace__Interop__Sys__NodeType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__Interop__Sys__NodeType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__Interop__Sys__NodeType_Unwrapped : int32_t {
__DT_UNKNOWN = 0,
__DT_FIFO = 1,
__DT_CHR = 2,
__DT_DIR = 4,
__DT_BLK = 6,
__DT_REG = 8,
__DT_LNK = 10,
__DT_SOCK = 12,
__DT_WHT = 14,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__Interop__Sys__NodeType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__Interop__Sys__NodeType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field DT_UNKNOWN offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType const DT_UNKNOWN;

/// @brief Field DT_FIFO offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType const DT_FIFO;

/// @brief Field DT_CHR offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType const DT_CHR;

/// @brief Field DT_DIR offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType const DT_DIR;

/// @brief Field DT_BLK offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType const DT_BLK;

/// @brief Field DT_REG offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType const DT_REG;

/// @brief Field DT_LNK offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType const DT_LNK;

/// @brief Field DT_SOCK offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType const DT_SOCK;

/// @brief Field DT_WHT offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType const DT_WHT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DirectoryEntry
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2214))
// CS Name: Interop::Sys::DirectoryEntry
struct CORDL_TYPE GlobalNamespace__Interop__Sys__DirectoryEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Name", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "NameLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "InodeType", ty: "GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType", modifiers: "", def_value: None }]
constexpr GlobalNamespace__Interop__Sys__DirectoryEntry(void* Name, int32_t NameLength, GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType InodeType) noexcept;


                    constexpr GlobalNamespace__Interop__Sys__DirectoryEntry(GlobalNamespace__Interop__Sys__DirectoryEntry const&) = default;
                    constexpr GlobalNamespace__Interop__Sys__DirectoryEntry(GlobalNamespace__Interop__Sys__DirectoryEntry&&) = default;
                    constexpr GlobalNamespace__Interop__Sys__DirectoryEntry& operator=(GlobalNamespace__Interop__Sys__DirectoryEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__Interop__Sys__DirectoryEntry& operator=(GlobalNamespace__Interop__Sys__DirectoryEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__Interop__Sys__DirectoryEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_Name, put=__set_Name))  Name;

constexpr void __set_Name(void* value) ;

constexpr void* __get_Name() const;

 int32_t __declspec(property(get=__get_NameLength, put=__set_NameLength))  NameLength;

constexpr void __set_NameLength(int32_t value) ;

constexpr int32_t __get_NameLength() const;

 GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType __declspec(property(get=__get_InodeType, put=__set_InodeType))  InodeType;

constexpr void __set_InodeType(GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType value) ;

constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType __get_InodeType() const;


// Methods

/// @brief Method GetName addr 0x22a45ec size 0x164 virtual false final false
 System::ReadOnlySpan_1<char16_t> GetName(System::Span_1<char16_t> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FileStatus
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2215))
// CS Name: Interop::Sys::FileStatus
struct CORDL_TYPE GlobalNamespace__Interop__Sys__FileStatus : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Flags", ty: "GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags", modifiers: "", def_value: None }, CppParam { name: "Mode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Uid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Gid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "Size", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "ATime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "ATimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "MTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "MTimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "CTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "CTimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "BirthTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "BirthTimeNsec", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Dev", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "Ino", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "UserFlags", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__Interop__Sys__FileStatus(GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags Flags, int32_t Mode, uint32_t Uid, uint32_t Gid, int64_t Size, int64_t ATime, int64_t ATimeNsec, int64_t MTime, int64_t MTimeNsec, int64_t CTime, int64_t CTimeNsec, int64_t BirthTime, int64_t BirthTimeNsec, int64_t Dev, int64_t Ino, uint32_t UserFlags) noexcept;


                    constexpr GlobalNamespace__Interop__Sys__FileStatus(GlobalNamespace__Interop__Sys__FileStatus const&) = default;
                    constexpr GlobalNamespace__Interop__Sys__FileStatus(GlobalNamespace__Interop__Sys__FileStatus&&) = default;
                    constexpr GlobalNamespace__Interop__Sys__FileStatus& operator=(GlobalNamespace__Interop__Sys__FileStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__Interop__Sys__FileStatus& operator=(GlobalNamespace__Interop__Sys__FileStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__Interop__Sys__FileStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags __declspec(property(get=__get_Flags, put=__set_Flags))  Flags;

constexpr void __set_Flags(GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags value) ;

constexpr GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags __get_Flags() const;

 int32_t __declspec(property(get=__get_Mode, put=__set_Mode))  Mode;

constexpr void __set_Mode(int32_t value) ;

constexpr int32_t __get_Mode() const;

 uint32_t __declspec(property(get=__get_Uid, put=__set_Uid))  Uid;

constexpr void __set_Uid(uint32_t value) ;

constexpr uint32_t __get_Uid() const;

 uint32_t __declspec(property(get=__get_Gid, put=__set_Gid))  Gid;

constexpr void __set_Gid(uint32_t value) ;

constexpr uint32_t __get_Gid() const;

 int64_t __declspec(property(get=__get_Size, put=__set_Size))  Size;

constexpr void __set_Size(int64_t value) ;

constexpr int64_t __get_Size() const;

 int64_t __declspec(property(get=__get_ATime, put=__set_ATime))  ATime;

constexpr void __set_ATime(int64_t value) ;

constexpr int64_t __get_ATime() const;

 int64_t __declspec(property(get=__get_ATimeNsec, put=__set_ATimeNsec))  ATimeNsec;

constexpr void __set_ATimeNsec(int64_t value) ;

constexpr int64_t __get_ATimeNsec() const;

 int64_t __declspec(property(get=__get_MTime, put=__set_MTime))  MTime;

constexpr void __set_MTime(int64_t value) ;

constexpr int64_t __get_MTime() const;

 int64_t __declspec(property(get=__get_MTimeNsec, put=__set_MTimeNsec))  MTimeNsec;

constexpr void __set_MTimeNsec(int64_t value) ;

constexpr int64_t __get_MTimeNsec() const;

 int64_t __declspec(property(get=__get_CTime, put=__set_CTime))  CTime;

constexpr void __set_CTime(int64_t value) ;

constexpr int64_t __get_CTime() const;

 int64_t __declspec(property(get=__get_CTimeNsec, put=__set_CTimeNsec))  CTimeNsec;

constexpr void __set_CTimeNsec(int64_t value) ;

constexpr int64_t __get_CTimeNsec() const;

 int64_t __declspec(property(get=__get_BirthTime, put=__set_BirthTime))  BirthTime;

constexpr void __set_BirthTime(int64_t value) ;

constexpr int64_t __get_BirthTime() const;

 int64_t __declspec(property(get=__get_BirthTimeNsec, put=__set_BirthTimeNsec))  BirthTimeNsec;

constexpr void __set_BirthTimeNsec(int64_t value) ;

constexpr int64_t __get_BirthTimeNsec() const;

 int64_t __declspec(property(get=__get_Dev, put=__set_Dev))  Dev;

constexpr void __set_Dev(int64_t value) ;

constexpr int64_t __get_Dev() const;

 int64_t __declspec(property(get=__get_Ino, put=__set_Ino))  Ino;

constexpr void __set_Ino(int64_t value) ;

constexpr int64_t __get_Ino() const;

 uint32_t __declspec(property(get=__get_UserFlags, put=__set_UserFlags))  UserFlags;

constexpr void __set_UserFlags(uint32_t value) ;

constexpr uint32_t __get_UserFlags() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FileStatusFlags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2216))
// CS Name: Interop::Sys::FileStatusFlags
struct CORDL_TYPE GlobalNamespace__Interop__Sys__FileStatusFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__Interop__Sys__FileStatusFlags(int32_t value__) noexcept;


                    constexpr GlobalNamespace__Interop__Sys__FileStatusFlags(GlobalNamespace__Interop__Sys__FileStatusFlags const&) = default;
                    constexpr GlobalNamespace__Interop__Sys__FileStatusFlags(GlobalNamespace__Interop__Sys__FileStatusFlags&&) = default;
                    constexpr GlobalNamespace__Interop__Sys__FileStatusFlags& operator=(GlobalNamespace__Interop__Sys__FileStatusFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__Interop__Sys__FileStatusFlags& operator=(GlobalNamespace__Interop__Sys__FileStatusFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__Interop__Sys__FileStatusFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__Interop__Sys__FileStatusFlags_Unwrapped : int32_t {
__None = 0,
__HasBirthTime = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__Interop__Sys__FileStatusFlags_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__Interop__Sys__FileStatusFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags const None;

/// @brief Field HasBirthTime offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags const HasBirthTime;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Permissions
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2217))
// CS Name: Interop::Sys::Permissions
struct CORDL_TYPE GlobalNamespace__Interop__Sys__Permissions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__Interop__Sys__Permissions(int32_t value__) noexcept;


                    constexpr GlobalNamespace__Interop__Sys__Permissions(GlobalNamespace__Interop__Sys__Permissions const&) = default;
                    constexpr GlobalNamespace__Interop__Sys__Permissions(GlobalNamespace__Interop__Sys__Permissions&&) = default;
                    constexpr GlobalNamespace__Interop__Sys__Permissions& operator=(GlobalNamespace__Interop__Sys__Permissions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__Interop__Sys__Permissions& operator=(GlobalNamespace__Interop__Sys__Permissions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__Interop__Sys__Permissions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__Interop__Sys__Permissions_Unwrapped : int32_t {
__Mask = 511,
__S_IRWXU = 448,
__S_IRUSR = 256,
__S_IWUSR = 128,
__S_IXUSR = 64,
__S_IRWXG = 56,
__S_IRGRP = 32,
__S_IWGRP = 16,
__S_IXGRP = 8,
__S_IRWXO = 7,
__S_IROTH = 4,
__S_IWOTH = 2,
__S_IXOTH = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__Interop__Sys__Permissions_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__Interop__Sys__Permissions_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Mask offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const Mask;

/// @brief Field S_IRWXU offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IRWXU;

/// @brief Field S_IRUSR offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IRUSR;

/// @brief Field S_IWUSR offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IWUSR;

/// @brief Field S_IXUSR offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IXUSR;

/// @brief Field S_IRWXG offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IRWXG;

/// @brief Field S_IRGRP offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IRGRP;

/// @brief Field S_IWGRP offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IWGRP;

/// @brief Field S_IXGRP offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IXGRP;

/// @brief Field S_IRWXO offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IRWXO;

/// @brief Field S_IROTH offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IROTH;

/// @brief Field S_IWOTH offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IWOTH;

/// @brief Field S_IXOTH offset 0
static GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions const S_IXOTH;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Sys
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2218))
// CS Name: Interop::Sys
class CORDL_TYPE GlobalNamespace__Interop__Sys : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Permissions = GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions;

using FileStatusFlags = GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags;

using FileStatus = GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus;

using DirectoryEntry = GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry;

using NodeType = GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__Interop__Sys() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__Interop__Sys", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__Interop__Sys(GlobalNamespace__Interop__Sys const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__Interop__Sys", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__Interop__Sys(GlobalNamespace__Interop__Sys&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__Interop__Sys(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__Interop__Sys& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__Interop__Sys& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__Interop__Sys& operator=(GlobalNamespace__Interop__Sys&& o) noexcept = default;
  constexpr GlobalNamespace__Interop__Sys& operator=(GlobalNamespace__Interop__Sys const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get_CanSetHiddenFlag, put=__set_CanSetHiddenFlag))  CanSetHiddenFlag;

static void __set_CanSetHiddenFlag(bool value) ;

static bool __get_CanSetHiddenFlag() ;


// Methods

/// @brief Method GetLastErrorInfo addr 0x22a3728 size 0x68 virtual false final false
static GlobalNamespace::GlobalNamespace__Interop__ErrorInfo GetLastErrorInfo() ;

/// @brief Method StrError addr 0x22a3ae0 size 0xfc virtual false final false
static ::StringW StrError(int32_t platformErrno) ;

/// @brief Method ConvertErrorPlatformToPal addr 0x22a3a4c size 0x4 virtual false final false
static GlobalNamespace::GlobalNamespace__Interop__Error ConvertErrorPlatformToPal(int32_t platformErrno) ;

/// @brief Method ConvertErrorPalToPlatform addr 0x22a3a64 size 0x7c virtual false final false
static int32_t ConvertErrorPalToPlatform(GlobalNamespace::GlobalNamespace__Interop__Error error) ;

/// @brief Method StrErrorR addr 0x22a3cb0 size 0x4 virtual false final false
static void* StrErrorR(int32_t platformErrno, void* buffer, int32_t bufferSize) ;

/// @brief Method GetNonCryptographicallySecureRandomBytes addr 0x22a39e0 size 0x4 virtual false final false
static void GetNonCryptographicallySecureRandomBytes(void* buffer, int32_t length) ;

/// @brief Method OpenDir addr 0x22a3cb4 size 0x34 virtual false final false
static ::cordl_internals::intptr_t OpenDir(::StringW path) ;

/// @brief Method GetReadDirRBufferSize addr 0x22a3ce8 size 0x4 virtual false final false
static int32_t GetReadDirRBufferSize() ;

/// @brief Method ReadDirR addr 0x22a3cec size 0x4 virtual false final false
static int32_t ReadDirR(::cordl_internals::intptr_t dir, void* buffer, int32_t bufferSize, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry> outputEntry) ;

/// @brief Method CloseDir addr 0x22a3cf0 size 0x1c virtual false final false
static int32_t CloseDir(::cordl_internals::intptr_t dir) ;

/// @brief Method ReadLink addr 0x22a3d0c size 0x4c virtual false final false
static int32_t ReadLink(::StringW path, ::ArrayW<uint8_t> buffer, int32_t bufferSize) ;

/// @brief Method ReadLink addr 0x22a3d58 size 0x218 virtual false final false
static ::StringW ReadLink(::StringW path) ;

/// @brief Method Stat addr 0x22a3f70 size 0x3c virtual false final false
static int32_t Stat(::StringW path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output) ;

/// @brief Method LStat addr 0x22a3fac size 0x3c virtual false final false
static int32_t LStat(::StringW path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output) ;

/// @brief Method Symlink addr 0x22a3fe8 size 0xb8 virtual false final false
static int32_t Symlink(::StringW target, ::StringW linkPath) ;

/// @brief Method CopyFile addr 0x22a40a0 size 0xb4 virtual false final false
static int32_t CopyFile(Microsoft::Win32::SafeHandles::SafeFileHandle source, Microsoft::Win32::SafeHandles::SafeFileHandle destination) ;

/// @brief Method GetEGid addr 0x22a4154 size 0x4 virtual false final false
static uint32_t GetEGid() ;

/// @brief Method GetEUid addr 0x22a4158 size 0x4 virtual false final false
static uint32_t GetEUid() ;

/// @brief Method LChflagsCanSetHiddenFlag addr 0x22a415c size 0x4 virtual false final false
static int32_t LChflagsCanSetHiddenFlag() ;

/// @brief Method Link addr 0x22a4160 size 0x54 virtual false final false
static int32_t Link(::StringW source, ::StringW link) ;

/// @brief Method MkDir addr 0x22a41b4 size 0x3c virtual false final false
static int32_t MkDir(::StringW path, int32_t mode) ;

/// @brief Method Rename addr 0x22a41f0 size 0x54 virtual false final false
static int32_t Rename(::StringW oldPath, ::StringW newPath) ;

/// @brief Method RmDir addr 0x22a4244 size 0x34 virtual false final false
static int32_t RmDir(::StringW path) ;

/// @brief Method Stat addr 0x22a4278 size 0x1c virtual false final false
static int32_t Stat(ByRef<uint8_t> path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output) ;

/// @brief Method Stat addr 0x22a4294 size 0x158 virtual false final false
static int32_t Stat(System::ReadOnlySpan_1<char16_t> path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output) ;

/// @brief Method LStat addr 0x22a43ec size 0x1c virtual false final false
static int32_t LStat(ByRef<uint8_t> path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output) ;

/// @brief Method LStat addr 0x22a4408 size 0x158 virtual false final false
static int32_t LStat(System::ReadOnlySpan_1<char16_t> path, ByRef<GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus> output) ;

/// @brief Method Unlink addr 0x22a4560 size 0x34 virtual false final false
static int32_t Unlink(::StringW pathname) ;

/// @brief Method DoubleToString addr 0x22a4594 size 0x4 virtual false final false
static int32_t DoubleToString(double_t value, void* format, void* buffer, int32_t bufferLength) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Interop
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2219))
// CS Name: Interop
class CORDL_TYPE Interop : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Sys = GlobalNamespace::GlobalNamespace__Interop__Sys;

using ErrorInfo = GlobalNamespace::GlobalNamespace__Interop__ErrorInfo;

using Error = GlobalNamespace::GlobalNamespace__Interop__Error;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Interop() = default;

// Ctor Parameters [CppParam { name: "", ty: "Interop", modifiers: " const&", def_value: None }]
constexpr Interop(Interop const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Interop", modifiers: "&&", def_value: None }]
constexpr Interop(Interop&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Interop(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Interop& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Interop& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Interop& operator=(Interop&& o) noexcept = default;
  constexpr Interop& operator=(Interop const& o) noexcept = default;
                


// Methods

/// @brief Method ThrowExceptionForIoErrno addr 0x22a3160 size 0x58 virtual false final false
static void ThrowExceptionForIoErrno(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo errorInfo, ::StringW path, bool isDirectory, System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> errorRewriter) ;

/// @brief Method CheckIo addr 0x22a36b0 size 0x78 virtual false final false
static int64_t CheckIo(int64_t result, ::StringW path, bool isDirectory, System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> errorRewriter) ;

/// @brief Method CheckIo addr 0x22a3790 size 0x20 virtual false final false
static int32_t CheckIo(int32_t result, ::StringW path, bool isDirectory, System::Func_2<GlobalNamespace::GlobalNamespace__Interop__ErrorInfo,GlobalNamespace::GlobalNamespace__Interop__ErrorInfo> errorRewriter) ;

/// @brief Method GetExceptionForIoErrno addr 0x22a31b8 size 0x4f8 virtual false final false
static System::Exception GetExceptionForIoErrno(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo errorInfo, ::StringW path, bool isDirectory) ;

/// @brief Method GetIOException addr 0x22a3820 size 0x8c virtual false final false
static System::Exception GetIOException(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo errorInfo) ;

/// @brief Method GetRandomBytes addr 0x22a397c size 0x64 virtual false final false
static void GetRandomBytes(void* buffer, int32_t length) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__Interop__Error, "", "Interop/Error");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatusFlags, "", "Interop/Sys/FileStatusFlags");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__Interop__Sys__NodeType, "", "Interop/Sys/NodeType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__Interop__Sys__Permissions, "", "Interop/Sys/Permissions");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__Interop__Sys);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__Interop__Sys, "", "Interop/Sys");
NEED_NO_BOX(GlobalNamespace::Interop);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Interop, "", "Interop");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__Interop__ErrorInfo, "", "Interop/ErrorInfo");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__Interop__Sys__DirectoryEntry, "", "Interop/Sys/DirectoryEntry");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__Interop__Sys__FileStatus, "", "Interop/Sys/FileStatus");
