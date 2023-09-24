#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Runtime::InteropServices {
class System__Runtime__InteropServices__Marshal____c;
}
namespace System {
class Array;
}
namespace System {
class Delegate;
}
namespace System {
class Exception;
}
namespace System {
class Type;
}
namespace System::Security {
class SecureString;
}
namespace System::Runtime::InteropServices {
class System__Runtime__InteropServices__Marshal__SecureStringAllocator;
}
namespace System::Runtime::InteropServices {
class ICustomMarshaler;
}
namespace System::Runtime::InteropServices {
class System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class Marshal;
}
namespace System::Runtime::InteropServices {
class System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer;
}
namespace System::Runtime::InteropServices {
class System__Runtime__InteropServices__Marshal__SecureStringAllocator;
}
namespace System::Runtime::InteropServices {
class System__Runtime__InteropServices__Marshal____c;
}
// Type: ::SecureStringAllocator
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3330))
// CS Name: System.Runtime.InteropServices.Marshal::SecureStringAllocator
class CORDL_TYPE System__Runtime__InteropServices__Marshal__SecureStringAllocator : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Runtime__InteropServices__Marshal__SecureStringAllocator() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__InteropServices__Marshal__SecureStringAllocator", modifiers: " const&", def_value: None }]
constexpr System__Runtime__InteropServices__Marshal__SecureStringAllocator(System__Runtime__InteropServices__Marshal__SecureStringAllocator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__InteropServices__Marshal__SecureStringAllocator", modifiers: "&&", def_value: None }]
constexpr System__Runtime__InteropServices__Marshal__SecureStringAllocator(System__Runtime__InteropServices__Marshal__SecureStringAllocator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__InteropServices__Marshal__SecureStringAllocator(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Runtime__InteropServices__Marshal__SecureStringAllocator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__InteropServices__Marshal__SecureStringAllocator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__InteropServices__Marshal__SecureStringAllocator& operator=(System__Runtime__InteropServices__Marshal__SecureStringAllocator&& o) noexcept = default;
  constexpr System__Runtime__InteropServices__Marshal__SecureStringAllocator& operator=(System__Runtime__InteropServices__Marshal__SecureStringAllocator const& o) noexcept = default;
                


// Methods

static System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal__SecureStringAllocator New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x236cad4 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x236d574 size 0x14 virtual true final false
 ::cordl_internals::intptr_t Invoke(int32_t len) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
// Type: ::MarshalerInstanceKeyComparer
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3331))
// CS Name: System.Runtime.InteropServices.Marshal::MarshalerInstanceKeyComparer
class CORDL_TYPE System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEqualityComparer_1<System::ValueTuple_2<System::Type,::StringW>>
constexpr operator  System::Collections::Generic::IEqualityComparer_1<System::ValueTuple_2<System::Type,::StringW>>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer", modifiers: " const&", def_value: None }]
constexpr System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer(System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer", modifiers: "&&", def_value: None }]
constexpr System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer(System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer& operator=(System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer&& o) noexcept = default;
  constexpr System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer& operator=(System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x236d588 size 0x74 virtual true final true
 bool Equals(System::ValueTuple_2<System::Type,::StringW> lhs, System::ValueTuple_2<System::Type,::StringW> rhs) ;

/// @brief Method GetHashCode addr 0x236d5fc size 0x54 virtual true final true
 int32_t GetHashCode(System::ValueTuple_2<System::Type,::StringW> key) ;

static System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer New_ctor() ;

/// @brief Method .ctor addr 0x236d650 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
// Type: ::<>c
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3332))
// CS Name: System.Runtime.InteropServices.Marshal::<>c
class CORDL_TYPE System__Runtime__InteropServices__Marshal____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Runtime__InteropServices__Marshal____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__InteropServices__Marshal____c", modifiers: " const&", def_value: None }]
constexpr System__Runtime__InteropServices__Marshal____c(System__Runtime__InteropServices__Marshal____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Runtime__InteropServices__Marshal____c", modifiers: "&&", def_value: None }]
constexpr System__Runtime__InteropServices__Marshal____c(System__Runtime__InteropServices__Marshal____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__InteropServices__Marshal____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Runtime__InteropServices__Marshal____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Runtime__InteropServices__Marshal____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Runtime__InteropServices__Marshal____c& operator=(System__Runtime__InteropServices__Marshal____c&& o) noexcept = default;
  constexpr System__Runtime__InteropServices__Marshal____c& operator=(System__Runtime__InteropServices__Marshal____c const& o) noexcept = default;
                


// Fields

static System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal____c value) ;

static System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal____c __get___9() ;

static System::Func_1<System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,::StringW>,System::Runtime::InteropServices::ICustomMarshaler>> __declspec(property(get=__get___9__201_0, put=__set___9__201_0))  __9__201_0;

static void __set___9__201_0(System::Func_1<System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,::StringW>,System::Runtime::InteropServices::ICustomMarshaler>> value) ;

static System::Func_1<System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,::StringW>,System::Runtime::InteropServices::ICustomMarshaler>> __get___9__201_0() ;


// Methods

static System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal____c New_ctor() ;

/// @brief Method .ctor addr 0x236d6bc size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetCustomMarshalerInstance>b__201_0 addr 0x236d6c4 size 0xa0 virtual false final false
 System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,::StringW>,System::Runtime::InteropServices::ICustomMarshaler> _GetCustomMarshalerInstance_b__201_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
// Type: System.Runtime.InteropServices::Marshal
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3333))
// CS Name: System.Runtime.InteropServices.Marshal
class CORDL_TYPE Marshal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal____c;

using MarshalerInstanceKeyComparer = System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer;

using SecureStringAllocator = System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal__SecureStringAllocator;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Marshal() = default;

// Ctor Parameters [CppParam { name: "", ty: "Marshal", modifiers: " const&", def_value: None }]
constexpr Marshal(Marshal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Marshal", modifiers: "&&", def_value: None }]
constexpr Marshal(Marshal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Marshal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Marshal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Marshal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Marshal& operator=(Marshal&& o) noexcept = default;
  constexpr Marshal& operator=(Marshal const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_SystemMaxDBCSCharSize, put=__set_SystemMaxDBCSCharSize))  SystemMaxDBCSCharSize;

static void __set_SystemMaxDBCSCharSize(int32_t value) ;

static int32_t __get_SystemMaxDBCSCharSize() ;

static int32_t __declspec(property(get=__get_SystemDefaultCharSize, put=__set_SystemDefaultCharSize))  SystemDefaultCharSize;

static void __set_SystemDefaultCharSize(int32_t value) ;

static int32_t __get_SystemDefaultCharSize() ;

static System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,::StringW>,System::Runtime::InteropServices::ICustomMarshaler> __declspec(property(get=__get_MarshalerInstanceCache, put=__set_MarshalerInstanceCache))  MarshalerInstanceCache;

static void __set_MarshalerInstanceCache(System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,::StringW>,System::Runtime::InteropServices::ICustomMarshaler> value) ;

static System::Collections::Generic::Dictionary_2<System::ValueTuple_2<System::Type,::StringW>,System::Runtime::InteropServices::ICustomMarshaler> __get_MarshalerInstanceCache() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_MarshalerInstanceCacheLock, put=__set_MarshalerInstanceCacheLock))  MarshalerInstanceCacheLock;

static void __set_MarshalerInstanceCacheLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_MarshalerInstanceCacheLock() ;


// Methods

/// @brief Method AllocCoTaskMem addr 0x236ba14 size 0x4 virtual false final false
static ::cordl_internals::intptr_t AllocCoTaskMem(int32_t cb) ;

/// @brief Method AllocHGlobal addr 0x236ba18 size 0x4 virtual false final false
static ::cordl_internals::intptr_t AllocHGlobal(::cordl_internals::intptr_t cb) ;

/// @brief Method AllocHGlobal addr 0x236ba1c size 0x68 virtual false final false
static ::cordl_internals::intptr_t AllocHGlobal(int32_t cb) ;

/// @brief Method copy_to_unmanaged_fixed addr 0x236ba84 size 0x4 virtual false final false
static void copy_to_unmanaged_fixed(System::Array source, int32_t startIndex, ::cordl_internals::intptr_t destination, int32_t length, void* fixed_source_element) ;

/// @brief Method skip_fixed addr 0x236ba88 size 0x34 virtual false final false
static bool skip_fixed(System::Array array, int32_t startIndex) ;

/// @brief Method copy_to_unmanaged addr 0x236babc size 0xe8 virtual false final false
static void copy_to_unmanaged(::ArrayW<uint8_t> source, int32_t startIndex, ::cordl_internals::intptr_t destination, int32_t length) ;

/// @brief Method Copy addr 0x236bba4 size 0xf4 virtual false final false
static void Copy(::ArrayW<uint8_t> source, int32_t startIndex, ::cordl_internals::intptr_t destination, int32_t length) ;

/// @brief Method copy_from_unmanaged addr 0x236bc98 size 0x80 virtual false final false
static void copy_from_unmanaged(::cordl_internals::intptr_t source, int32_t startIndex, System::Array destination, int32_t length) ;

/// @brief Method copy_from_unmanaged_fixed addr 0x236bd18 size 0x4 virtual false final false
static void copy_from_unmanaged_fixed(::cordl_internals::intptr_t source, int32_t startIndex, System::Array destination, int32_t length, void* fixed_destination_element) ;

/// @brief Method Copy addr 0x236bd1c size 0xf4 virtual false final false
static void Copy(::cordl_internals::intptr_t source, ::ArrayW<uint8_t> destination, int32_t startIndex, int32_t length) ;

/// @brief Method Copy addr 0x236be10 size 0xf4 virtual false final false
static void Copy(::cordl_internals::intptr_t source, ::ArrayW<char16_t> destination, int32_t startIndex, int32_t length) ;

/// @brief Method Copy addr 0x236bf04 size 0xf4 virtual false final false
static void Copy(::cordl_internals::intptr_t source, ::ArrayW<float_t> destination, int32_t startIndex, int32_t length) ;

/// @brief Method FreeBSTR addr 0x236bff8 size 0x4 virtual false final false
static void FreeBSTR(::cordl_internals::intptr_t ptr) ;

/// @brief Method FreeCoTaskMem addr 0x236bffc size 0x4 virtual false final false
static void FreeCoTaskMem(::cordl_internals::intptr_t ptr) ;

/// @brief Method FreeHGlobal addr 0x236c000 size 0x4 virtual false final false
static void FreeHGlobal(::cordl_internals::intptr_t hglobal) ;

/// @brief Method ClearBSTR addr 0x236c004 size 0xac virtual false final false
static void ClearBSTR(::cordl_internals::intptr_t ptr) ;

/// @brief Method ZeroFreeBSTR addr 0x236c120 size 0x5c virtual false final false
static void ZeroFreeBSTR(::cordl_internals::intptr_t s) ;

/// @brief Method ClearAnsi addr 0x236c17c size 0x9c virtual false final false
static void ClearAnsi(::cordl_internals::intptr_t ptr) ;

/// @brief Method ClearUnicode addr 0x236c234 size 0x90 virtual false final false
static void ClearUnicode(::cordl_internals::intptr_t ptr) ;

/// @brief Method ZeroFreeGlobalAllocAnsi addr 0x236c358 size 0x5c virtual false final false
static void ZeroFreeGlobalAllocAnsi(::cordl_internals::intptr_t s) ;

/// @brief Method ZeroFreeGlobalAllocUnicode addr 0x236c3b4 size 0x5c virtual false final false
static void ZeroFreeGlobalAllocUnicode(::cordl_internals::intptr_t s) ;

/// @brief Method GetHRForException addr 0x236c410 size 0xc virtual false final false
static int32_t GetHRForException(System::Exception e) ;

/// @brief Method IsComObject addr 0x236c41c size 0x8 virtual false final false
static bool IsComObject(::bs_hook::Il2CppWrapperType o) ;

/// @brief Method GetLastWin32Error addr 0x236c424 size 0x4 virtual false final false
static int32_t GetLastWin32Error() ;

/// @brief Method OffsetOf addr 0x236c428 size 0x4 virtual false final false
static ::cordl_internals::intptr_t OffsetOf(System::Type t, ::StringW fieldName) ;

/// @brief Method PtrToStringAnsi addr 0x236c42c size 0x4 virtual false final false
static ::StringW PtrToStringAnsi(::cordl_internals::intptr_t ptr) ;

/// @brief Method PtrToStringAnsi addr 0x236c430 size 0x4 virtual false final false
static ::StringW PtrToStringAnsi(::cordl_internals::intptr_t ptr, int32_t len) ;

/// @brief Method PtrToStringUni addr 0x236c434 size 0x4 virtual false final false
static ::StringW PtrToStringUni(::cordl_internals::intptr_t ptr) ;

/// @brief Method PtrToStringUni addr 0x236c438 size 0x4 virtual false final false
static ::StringW PtrToStringUni(::cordl_internals::intptr_t ptr, int32_t len) ;

/// @brief Method PtrToStructure addr 0x236c43c size 0x4 virtual false final false
static void PtrToStructure(::cordl_internals::intptr_t ptr, ::bs_hook::Il2CppWrapperType structure) ;

/// @brief Method PtrToStructure addr 0x236c440 size 0x4 virtual false final false
static ::bs_hook::Il2CppWrapperType PtrToStructure(::cordl_internals::intptr_t ptr, System::Type structureType) ;

/// @brief Method PtrToStructure addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void PtrToStructure(::cordl_internals::intptr_t ptr, T structure) ;

/// @brief Method PtrToStructure addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T PtrToStructure(::cordl_internals::intptr_t ptr) ;

/// @brief Method ReadByte addr 0x236c218 size 0x1c virtual false final false
static uint8_t ReadByte(::cordl_internals::intptr_t ptr, int32_t ofs) ;

/// @brief Method ReadInt16 addr 0x236c310 size 0x48 virtual false final false
static int16_t ReadInt16(::cordl_internals::intptr_t ptr, int32_t ofs) ;

/// @brief Method ReadInt32 addr 0x236c444 size 0x40 virtual false final false
static int32_t ReadInt32(::cordl_internals::intptr_t ptr) ;

/// @brief Method ReadInt32 addr 0x236c0b0 size 0x4c virtual false final false
static int32_t ReadInt32(::cordl_internals::intptr_t ptr, int32_t ofs) ;

/// @brief Method SizeOf addr 0x236c484 size 0x70 virtual false final false
static int32_t SizeOf(::bs_hook::Il2CppWrapperType structure) ;

/// @brief Method SizeOf addr 0x236c4f4 size 0x4 virtual false final false
static int32_t SizeOf(System::Type t) ;

/// @brief Method SizeOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t SizeOf(T structure) ;

/// @brief Method StringToHGlobalAnsi addr 0x236c4f8 size 0x4 virtual false final false
static ::cordl_internals::intptr_t StringToHGlobalAnsi(void* s, int32_t length) ;

/// @brief Method StringToHGlobalAnsi addr 0x236c4fc size 0x70 virtual false final false
static ::cordl_internals::intptr_t StringToHGlobalAnsi(::StringW s) ;

/// @brief Method SecureStringToBSTR addr 0x236c570 size 0x188 virtual false final false
static ::cordl_internals::intptr_t SecureStringToBSTR(System::Security::SecureString s) ;

/// @brief Method SecureStringGlobalAllocator addr 0x236c6fc size 0x54 virtual false final false
static ::cordl_internals::intptr_t SecureStringGlobalAllocator(int32_t len) ;

/// @brief Method SecureStringToUnicode addr 0x236c750 size 0x294 virtual false final false
static ::cordl_internals::intptr_t SecureStringToUnicode(System::Security::SecureString s, System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal__SecureStringAllocator allocator) ;

/// @brief Method SecureStringToGlobalAllocUnicode addr 0x236c9e4 size 0xf0 virtual false final false
static ::cordl_internals::intptr_t SecureStringToGlobalAllocUnicode(System::Security::SecureString s) ;

/// @brief Method StructureToPtr addr 0x236cb98 size 0x8 virtual false final false
static void StructureToPtr(::bs_hook::Il2CppWrapperType structure, ::cordl_internals::intptr_t ptr, bool fDeleteOld) ;

/// @brief Method StructureToPtr addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void StructureToPtr(T structure, ::cordl_internals::intptr_t ptr, bool fDeleteOld) ;

/// @brief Method BufferToBSTR addr 0x236c6f8 size 0x4 virtual false final false
static ::cordl_internals::intptr_t BufferToBSTR(void* ptr, int32_t slen) ;

/// @brief Method UnsafeAddrOfPinnedArrayElement addr 0x236cba0 size 0x4 virtual false final false
static ::cordl_internals::intptr_t UnsafeAddrOfPinnedArrayElement(System::Array arr, int32_t index) ;

/// @brief Method UnsafeAddrOfPinnedArrayElement addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::cordl_internals::intptr_t UnsafeAddrOfPinnedArrayElement(::ArrayW<T> arr, int32_t index) ;

/// @brief Method WriteByte addr 0x236c0fc size 0x24 virtual false final false
static void WriteByte(::cordl_internals::intptr_t ptr, int32_t ofs, uint8_t val) ;

/// @brief Method WriteInt16 addr 0x236c2c4 size 0x4c virtual false final false
static void WriteInt16(::cordl_internals::intptr_t ptr, int32_t ofs, int16_t val) ;

/// @brief Method GetFunctionPointerForDelegateInternal addr 0x236cba4 size 0x4 virtual false final false
static ::cordl_internals::intptr_t GetFunctionPointerForDelegateInternal(System::Delegate d) ;

/// @brief Method GetFunctionPointerForDelegate addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDelegate>
static ::cordl_internals::intptr_t GetFunctionPointerForDelegate(TDelegate d) ;

/// @brief Method GetCustomMarshalerInstance addr 0x236cba8 size 0x814 virtual false final false
static System::Runtime::InteropServices::ICustomMarshaler GetCustomMarshalerInstance(System::Type type, ::StringW cookie) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::Marshal);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::Marshal, "System.Runtime.InteropServices", "Marshal");
NEED_NO_BOX(System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal__MarshalerInstanceKeyComparer, "System.Runtime.InteropServices", "Marshal/MarshalerInstanceKeyComparer");
NEED_NO_BOX(System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal__SecureStringAllocator);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal__SecureStringAllocator, "System.Runtime.InteropServices", "Marshal/SecureStringAllocator");
NEED_NO_BOX(System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal____c);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::System__Runtime__InteropServices__Marshal____c, "System.Runtime.InteropServices", "Marshal/<>c");
