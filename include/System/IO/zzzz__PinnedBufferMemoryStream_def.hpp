#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Runtime::InteropServices {
struct GCHandle;
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
namespace System::IO {
class PinnedBufferMemoryStream;
}
// Type: System.IO::PinnedBufferMemoryStream
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3573))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3561))
// CS Name: System.IO.PinnedBufferMemoryStream
class CORDL_TYPE PinnedBufferMemoryStream : public System::IO::UnmanagedMemoryStream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~PinnedBufferMemoryStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "PinnedBufferMemoryStream", modifiers: " const&", def_value: None }]
constexpr PinnedBufferMemoryStream(PinnedBufferMemoryStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PinnedBufferMemoryStream", modifiers: "&&", def_value: None }]
constexpr PinnedBufferMemoryStream(PinnedBufferMemoryStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PinnedBufferMemoryStream(void* ptr) noexcept : System::IO::UnmanagedMemoryStream(ptr) {
}


  constexpr PinnedBufferMemoryStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PinnedBufferMemoryStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PinnedBufferMemoryStream& operator=(PinnedBufferMemoryStream&& o) noexcept = default;
  constexpr PinnedBufferMemoryStream& operator=(PinnedBufferMemoryStream const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get__array, put=__set__array))  _array;

constexpr void __set__array(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__array() const;

 System::Runtime::InteropServices::GCHandle __declspec(property(get=__get__pinningHandle, put=__set__pinningHandle))  _pinningHandle;

constexpr void __set__pinningHandle(System::Runtime::InteropServices::GCHandle value) ;

constexpr System::Runtime::InteropServices::GCHandle __get__pinningHandle() const;


// Methods

static System::IO::PinnedBufferMemoryStream New_ctor(::ArrayW<uint8_t> array) ;

/// @brief Method .ctor addr 0x2392e80 size 0xb4 virtual false final false
 void _ctor(::ArrayW<uint8_t> array) ;

/// @brief Method Read addr 0x23931a0 size 0x4 virtual true final false
 int32_t Read(System::Span_1<uint8_t> buffer) ;

/// @brief Method Write addr 0x23933d0 size 0x4 virtual true final false
 void Write(System::ReadOnlySpan_1<uint8_t> buffer) ;

/// @brief Method Finalize addr 0x23936d0 size 0xa4 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2393774 size 0x50 virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::PinnedBufferMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(System::IO::PinnedBufferMemoryStream, "System.IO", "PinnedBufferMemoryStream");
