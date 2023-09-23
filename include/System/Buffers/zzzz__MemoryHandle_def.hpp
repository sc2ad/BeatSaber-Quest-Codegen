#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class IDisposable;
}
namespace System::Buffers {
class IPinnable;
}
// Forward declare root types
namespace System::Buffers {
struct MemoryHandle;
}
// Type: System.Buffers::MemoryHandle
namespace System::Buffers {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3869))
// CS Name: System.Buffers.MemoryHandle
struct CORDL_TYPE MemoryHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "_pointer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }, CppParam { name: "_pinnable", ty: "System::Buffers::IPinnable", modifiers: "", def_value: None }]
constexpr MemoryHandle(void* _pointer, System::Runtime::InteropServices::GCHandle _handle, System::Buffers::IPinnable _pinnable) noexcept;


                    constexpr MemoryHandle(MemoryHandle const&) = default;
                    constexpr MemoryHandle(MemoryHandle&&) = default;
                    constexpr MemoryHandle& operator=(MemoryHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MemoryHandle& operator=(MemoryHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MemoryHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get__pointer, put=__set__pointer))  _pointer;

constexpr void __set__pointer(void* value) ;

constexpr void* __get__pointer() const;

 System::Runtime::InteropServices::GCHandle __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(System::Runtime::InteropServices::GCHandle value) ;

constexpr System::Runtime::InteropServices::GCHandle __get__handle() const;

 System::Buffers::IPinnable __declspec(property(get=__get__pinnable, put=__set__pinnable))  _pinnable;

constexpr void __set__pinnable(System::Buffers::IPinnable value) ;

constexpr System::Buffers::IPinnable __get__pinnable() const;


// Properties

 void* __declspec(property(get=get_Pointer))  Pointer;


// Methods

/// @brief Method .ctor addr 0x241e76c size 0xc virtual false final false
 void _ctor(void* pointer, System::Runtime::InteropServices::GCHandle handle, System::Buffers::IPinnable pinnable) ;

/// @brief Method get_Pointer addr 0x241e778 size 0x8 virtual false final false
 void* get_Pointer() ;

/// @brief Method Dispose addr 0x241e780 size 0xc8 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Buffers
DEFINE_IL2CPP_ARG_TYPE(System::Buffers::MemoryHandle, "System.Buffers", "MemoryHandle");
