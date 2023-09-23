#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Threading {
class Volatile;
}
namespace System::Threading {
struct System__Threading__Volatile__VolatileBoolean;
}
namespace System::Threading {
struct System__Threading__Volatile__VolatileInt32;
}
namespace System::Threading {
struct System__Threading__Volatile__VolatileObject;
}
// Type: ::VolatileBoolean
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2751))
// CS Name: System.Threading.Volatile::VolatileBoolean
struct CORDL_TYPE System__Threading__Volatile__VolatileBoolean : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Value", ty: "bool", modifiers: "", def_value: None }]
constexpr System__Threading__Volatile__VolatileBoolean(bool Value) noexcept;


                    constexpr System__Threading__Volatile__VolatileBoolean(System__Threading__Volatile__VolatileBoolean const&) = default;
                    constexpr System__Threading__Volatile__VolatileBoolean(System__Threading__Volatile__VolatileBoolean&&) = default;
                    constexpr System__Threading__Volatile__VolatileBoolean& operator=(System__Threading__Volatile__VolatileBoolean const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__Volatile__VolatileBoolean& operator=(System__Threading__Volatile__VolatileBoolean&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Volatile__VolatileBoolean(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(bool value) ;

constexpr bool __get_Value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::VolatileInt32
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2752))
// CS Name: System.Threading.Volatile::VolatileInt32
struct CORDL_TYPE System__Threading__Volatile__VolatileInt32 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Threading__Volatile__VolatileInt32(int32_t Value) noexcept;


                    constexpr System__Threading__Volatile__VolatileInt32(System__Threading__Volatile__VolatileInt32 const&) = default;
                    constexpr System__Threading__Volatile__VolatileInt32(System__Threading__Volatile__VolatileInt32&&) = default;
                    constexpr System__Threading__Volatile__VolatileInt32& operator=(System__Threading__Volatile__VolatileInt32 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__Volatile__VolatileInt32& operator=(System__Threading__Volatile__VolatileInt32&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Volatile__VolatileInt32(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(int32_t value) ;

constexpr int32_t __get_Value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::VolatileObject
namespace System::Threading {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2753))
// CS Name: System.Threading.Volatile::VolatileObject
struct CORDL_TYPE System__Threading__Volatile__VolatileObject : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Value", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
constexpr System__Threading__Volatile__VolatileObject(::bs_hook::Il2CppWrapperType Value) noexcept;


                    constexpr System__Threading__Volatile__VolatileObject(System__Threading__Volatile__VolatileObject const&) = default;
                    constexpr System__Threading__Volatile__VolatileObject(System__Threading__Volatile__VolatileObject&&) = default;
                    constexpr System__Threading__Volatile__VolatileObject& operator=(System__Threading__Volatile__VolatileObject const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__Volatile__VolatileObject& operator=(System__Threading__Volatile__VolatileObject&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__Volatile__VolatileObject(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::Volatile
namespace System::Threading {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2754))
// CS Name: System.Threading.Volatile
class CORDL_TYPE Volatile : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using VolatileObject = System::Threading::System__Threading__Volatile__VolatileObject;

using VolatileInt32 = System::Threading::System__Threading__Volatile__VolatileInt32;

using VolatileBoolean = System::Threading::System__Threading__Volatile__VolatileBoolean;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Volatile() = default;

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: " const&", def_value: None }]
constexpr Volatile(Volatile const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "&&", def_value: None }]
constexpr Volatile(Volatile&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Volatile(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Volatile& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Volatile& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Volatile& operator=(Volatile&& o) noexcept = default;
  constexpr Volatile& operator=(Volatile const& o) noexcept = default;
                


// Methods

/// @brief Method Read addr 0x24b35fc size 0x18 virtual false final false
static bool Read(ByRef<bool> location) ;

/// @brief Method Write addr 0x24b3614 size 0x24 virtual false final false
static void Write(ByRef<bool> location, bool value) ;

/// @brief Method Read addr 0x24b3638 size 0x18 virtual false final false
static int32_t Read(ByRef<int32_t> location) ;

/// @brief Method Write addr 0x24b3650 size 0x24 virtual false final false
static void Write(ByRef<int32_t> location, int32_t value) ;

/// @brief Method Read addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Read(ByRef<T> location) ;

/// @brief Method Write addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Write(ByRef<T> location, T value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::Volatile);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Volatile, "System.Threading", "Volatile");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__Volatile__VolatileBoolean, "System.Threading", "Volatile/VolatileBoolean");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__Volatile__VolatileInt32, "System.Threading", "Volatile/VolatileInt32");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::System__Threading__Volatile__VolatileObject, "System.Threading", "Volatile/VolatileObject");
