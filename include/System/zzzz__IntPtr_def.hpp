#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
struct IntPtr;
}
// Type: System::IntPtr
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2602))
// CS Name: System.IntPtr
struct CORDL_TYPE IntPtr : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

/// @brief Convert operator to System::IEquatable_1<::cordl_internals::intptr_t>
constexpr operator  System::IEquatable_1<::cordl_internals::intptr_t>() const;

// Ctor Parameters [CppParam { name: "m_value", ty: "void*", modifiers: "", def_value: None }]
constexpr IntPtr(void* m_value) noexcept;


                    constexpr IntPtr(IntPtr const&) = default;
                    constexpr IntPtr(IntPtr&&) = default;
                    constexpr IntPtr& operator=(IntPtr const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IntPtr& operator=(IntPtr&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IntPtr(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_value, put=__set_m_value))  m_value;

constexpr void __set_m_value(void* value) ;

constexpr void* __get_m_value() const;

static ::cordl_internals::intptr_t __declspec(property(get=__get_Zero, put=__set_Zero))  Zero;

static void __set_Zero(::cordl_internals::intptr_t value) ;

static ::cordl_internals::intptr_t __get_Zero() ;


// Properties

static int32_t __declspec(property(get=get_Size))  Size;


// Methods

/// @brief Method .ctor addr 0x248bc4c size 0xc virtual false final false
 void _ctor(int32_t value) ;

/// @brief Method .ctor addr 0x248bc58 size 0x8 virtual false final false
 void _ctor(int64_t value) ;

/// @brief Method .ctor addr 0x248bc60 size 0x8 virtual false final false
 void _ctor(void* value) ;

/// @brief Method .ctor addr 0x248bc68 size 0x60 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Size addr 0x248bcc8 size 0x8 virtual false final false
static int32_t get_Size() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x248bcd0 size 0xa4 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Equals addr 0x248bd7c size 0x78 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2487ee8 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToInt32 addr 0x248bdf4 size 0x8 virtual false final false
 int32_t ToInt32() ;

/// @brief Method ToInt64 addr 0x248bd74 size 0x8 virtual false final false
 int64_t ToInt64() ;

/// @brief Method ToPointer addr 0x248bdfc size 0x8 virtual false final false
 void* ToPointer() ;

/// @brief Method ToString addr 0x248be04 size 0x28 virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x248be2c size 0x24 virtual false final false
 ::StringW ToString(::StringW format) ;

/// @brief Method op_Equality addr 0x2483d3c size 0xc virtual false final false
static bool op_Equality(::cordl_internals::intptr_t value1, ::cordl_internals::intptr_t value2) ;

/// @brief Method op_Inequality addr 0x248b240 size 0xc virtual false final false
static bool op_Inequality(::cordl_internals::intptr_t value1, ::cordl_internals::intptr_t value2) ;

/// @brief Method op_Explicit addr 0x248be50 size 0x8 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(int32_t value) ;

/// @brief Method op_Explicit addr 0x248be58 size 0x4 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(int64_t value) ;

/// @brief Method op_Explicit addr 0x248be5c size 0x4 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(void* value) ;

/// @brief Method op_Explicit addr 0x248be60 size 0x4 virtual false final false
static int32_t op_Explicit_int32_t(::cordl_internals::intptr_t value) ;

/// @brief Method op_Explicit addr 0x248be64 size 0x4 virtual false final false
static int64_t op_Explicit_int64_t(::cordl_internals::intptr_t value) ;

/// @brief Method op_Explicit addr 0x248be68 size 0x4 virtual false final false
static void* op_Explicit_void*(::cordl_internals::intptr_t value) ;

/// @brief Method Add addr 0x248be6c size 0x8 virtual false final false
static ::cordl_internals::intptr_t Add(::cordl_internals::intptr_t pointer, int32_t offset) ;

/// @brief Method op_Addition addr 0x248be74 size 0x8 virtual false final false
static ::cordl_internals::intptr_t op_Addition(::cordl_internals::intptr_t pointer, int32_t offset) ;

/// @brief Method op_Subtraction addr 0x248be7c size 0x8 virtual false final false
static ::cordl_internals::intptr_t op_Subtraction(::cordl_internals::intptr_t pointer, int32_t offset) ;

/// @brief Method IsNull addr 0x248be84 size 0x10 virtual false final false
 bool IsNull() ;

/// @brief Method System.IEquatable<System.IntPtr>.Equals addr 0x248be94 size 0x10 virtual true final true
 bool System_IEquatable_System_IntPtr__Equals(::cordl_internals::intptr_t other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::IntPtr, "System", "IntPtr");
