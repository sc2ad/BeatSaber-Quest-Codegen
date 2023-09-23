#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class RuntimeType;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Reflection {
class RuntimeFieldInfo;
}
// Forward declare root types
namespace System {
struct RuntimeFieldHandle;
}
// Type: System::RuntimeFieldHandle
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2615))
// CS Name: System.RuntimeFieldHandle
struct CORDL_TYPE RuntimeFieldHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const;

// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr RuntimeFieldHandle(::cordl_internals::intptr_t value) noexcept;


                    constexpr RuntimeFieldHandle(RuntimeFieldHandle const&) = default;
                    constexpr RuntimeFieldHandle(RuntimeFieldHandle&&) = default;
                    constexpr RuntimeFieldHandle& operator=(RuntimeFieldHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RuntimeFieldHandle& operator=(RuntimeFieldHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RuntimeFieldHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_value, put=__set_value))  value;

constexpr void __set_value(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_value() const;


// Properties

 ::cordl_internals::intptr_t __declspec(property(get=get_Value))  Value;


// Methods

/// @brief Method .ctor addr 0x2490958 size 0x8 virtual false final false
 void _ctor(::cordl_internals::intptr_t v) ;

/// @brief Method .ctor addr 0x2490960 size 0x1b4 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Value addr 0x2490b14 size 0x8 virtual false final false
 ::cordl_internals::intptr_t get_Value() ;

/// @brief Method GetObjectData addr 0x2490b1c size 0x1bc virtual true final true
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Equals addr 0x2490cd8 size 0xfc virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2490dd4 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method SetValueInternal addr 0x2490ddc size 0x4 virtual false final false
static void SetValueInternal(System::Reflection::FieldInfo fi, ::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method SetValue addr 0x2490de0 size 0x4 virtual false final false
static void SetValue(System::Reflection::RuntimeFieldInfo field, ::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::RuntimeType fieldType, System::Reflection::FieldAttributes fieldAttr, System::RuntimeType declaringType, ByRef<bool> domainInitialized) ;

/// @brief Method SetValueDirect addr 0x2490de4 size 0x4 virtual false final false
static void SetValueDirect(System::Reflection::RuntimeFieldInfo field, System::RuntimeType fieldType, void* pTypedRef, ::bs_hook::Il2CppWrapperType value, System::RuntimeType contextType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::RuntimeFieldHandle, "System", "RuntimeFieldHandle");
