#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer;
}
// Type: ::Enumerator
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6610))
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionString::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<char16_t>
constexpr operator  System::Collections::Generic::IEnumerator_1<char16_t>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_CompositionString", ty: "UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: None }, CppParam { name: "m_CurrentCharacter", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator(UnityEngine::InputSystem::LowLevel::IMECompositionString m_CompositionString, char16_t m_CurrentCharacter, int32_t m_CurrentIndex) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator(UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator(UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8c};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::IMECompositionString __declspec(property(get=__get_m_CompositionString, put=__set_m_CompositionString))  m_CompositionString;

constexpr void __set_m_CompositionString(UnityEngine::InputSystem::LowLevel::IMECompositionString value) ;

constexpr UnityEngine::InputSystem::LowLevel::IMECompositionString __get_m_CompositionString() const;

 char16_t __declspec(property(get=__get_m_CurrentCharacter, put=__set_m_CurrentCharacter))  m_CurrentCharacter;

constexpr void __set_m_CurrentCharacter(char16_t value) ;

constexpr char16_t __get_m_CurrentCharacter() const;

 int32_t __declspec(property(get=__get_m_CurrentIndex, put=__set_m_CurrentIndex))  m_CurrentIndex;

constexpr void __set_m_CurrentIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentIndex() const;


// Properties

 char16_t __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x2957694 size 0x24 virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString) ;

/// @brief Method MoveNext addr 0x29576bc size 0x34 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x29576f0 size 0xc virtual true final true
 void Reset() ;

/// @brief Method Dispose addr 0x29576fc size 0x4 virtual true final true
 void Dispose() ;

/// @brief Method get_Current addr 0x2957700 size 0x8 virtual true final true
 char16_t get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2957708 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<buffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6611))
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionString::<buffer>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "char16_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer(char16_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x80};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 char16_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(char16_t value) ;

constexpr char16_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::IMECompositionString
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6612))
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionString
struct CORDL_TYPE IMECompositionString : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _buffer_e__FixedBuffer = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer;

using Enumerator = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<char16_t>
constexpr operator  System::Collections::Generic::IEnumerable_1<char16_t>() const;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const;

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr IMECompositionString(int32_t size, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer buffer) noexcept;


                    constexpr IMECompositionString(IMECompositionString const&) = default;
                    constexpr IMECompositionString(IMECompositionString&&) = default;
                    constexpr IMECompositionString& operator=(IMECompositionString const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IMECompositionString& operator=(IMECompositionString&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x84};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IMECompositionString(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(int32_t value) ;

constexpr int32_t __get_size() const;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer __declspec(property(get=__get_buffer, put=__set_buffer))  buffer;

constexpr void __set_buffer(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer value) ;

constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer __get_buffer() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 char16_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Count addr 0x2957570 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x2957578 size 0x70 virtual false final false
 char16_t get_Item(int32_t index) ;

/// @brief Method .ctor addr 0x29574f0 size 0x80 virtual false final false
 void _ctor(::StringW characters) ;

/// @brief Method ToString addr 0x29575e8 size 0x18 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetEnumerator addr 0x2957600 size 0x94 virtual true final true
 System::Collections::Generic::IEnumerator_1<char16_t> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x29576b8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::IMECompositionString, "UnityEngine.InputSystem.LowLevel", "IMECompositionString");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__IMECompositionString__Enumerator, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__IMECompositionString___buffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "IMECompositionString/<buffer>e__FixedBuffer");
