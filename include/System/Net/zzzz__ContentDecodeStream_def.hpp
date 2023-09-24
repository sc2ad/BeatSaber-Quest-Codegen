#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__WebReadStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
struct System__Net__ContentDecodeStream__Mode;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class WebOperation;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Net {
struct System__Net__ContentDecodeStream__Mode;
}
namespace System::Net {
class ContentDecodeStream;
}
// Type: ::Mode
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8006))
// CS Name: System.Net.ContentDecodeStream::Mode
struct CORDL_TYPE System__Net__ContentDecodeStream__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__ContentDecodeStream__Mode(int32_t value__) noexcept;


                    constexpr System__Net__ContentDecodeStream__Mode(System__Net__ContentDecodeStream__Mode const&) = default;
                    constexpr System__Net__ContentDecodeStream__Mode(System__Net__ContentDecodeStream__Mode&&) = default;
                    constexpr System__Net__ContentDecodeStream__Mode& operator=(System__Net__ContentDecodeStream__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__ContentDecodeStream__Mode& operator=(System__Net__ContentDecodeStream__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__ContentDecodeStream__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__ContentDecodeStream__Mode_Unwrapped : int32_t {
__GZip = 0,
__Deflate = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__ContentDecodeStream__Mode_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__ContentDecodeStream__Mode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field GZip offset 0
static System::Net::System__Net__ContentDecodeStream__Mode const GZip;

/// @brief Field Deflate offset 0
static System::Net::System__Net__ContentDecodeStream__Mode const Deflate;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::ContentDecodeStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8007))
// CS Name: System.Net.ContentDecodeStream
class CORDL_TYPE ContentDecodeStream : public System::Net::WebReadStream {
public:
// Declarations
using Mode = System::Net::System__Net__ContentDecodeStream__Mode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ContentDecodeStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: " const&", def_value: None }]
constexpr ContentDecodeStream(ContentDecodeStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContentDecodeStream", modifiers: "&&", def_value: None }]
constexpr ContentDecodeStream(ContentDecodeStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContentDecodeStream(void* ptr) noexcept : System::Net::WebReadStream(ptr) {
}


  constexpr ContentDecodeStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContentDecodeStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContentDecodeStream& operator=(ContentDecodeStream&& o) noexcept = default;
  constexpr ContentDecodeStream& operator=(ContentDecodeStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get__OriginalInnerStream_k__BackingField, put=__set__OriginalInnerStream_k__BackingField))  _OriginalInnerStream_k__BackingField;

constexpr void __set__OriginalInnerStream_k__BackingField(System::IO::Stream value) ;

constexpr System::IO::Stream __get__OriginalInnerStream_k__BackingField() const;


// Properties

 System::IO::Stream __declspec(property(get=get_OriginalInnerStream))  OriginalInnerStream;


// Methods

/// @brief Method Create addr 0x282ac54 size 0xec virtual false final false
static System::Net::ContentDecodeStream Create(System::Net::WebOperation operation, System::IO::Stream innerStream, System::Net::System__Net__ContentDecodeStream__Mode mode) ;

/// @brief Method get_OriginalInnerStream addr 0x282ad68 size 0x8 virtual false final false
 System::IO::Stream get_OriginalInnerStream() ;

static System::Net::ContentDecodeStream New_ctor(System::Net::WebOperation operation, System::IO::Stream decodeStream, System::IO::Stream originalInnerStream) ;

/// @brief Method .ctor addr 0x282ad40 size 0x28 virtual false final false
 void _ctor(System::Net::WebOperation operation, System::IO::Stream decodeStream, System::IO::Stream originalInnerStream) ;

/// @brief Method ProcessReadAsync addr 0x282ad70 size 0x24 virtual true final false
 System::Threading::Tasks::Task_1<int32_t> ProcessReadAsync(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method FinishReading addr 0x282ad94 size 0xf0 virtual true final false
 System::Threading::Tasks::Task FinishReading(System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__ContentDecodeStream__Mode, "System.Net", "ContentDecodeStream/Mode");
NEED_NO_BOX(System::Net::ContentDecodeStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ContentDecodeStream, "System.Net", "ContentDecodeStream");
