#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result;
}
namespace UnityEngine::InputSystem::LowLevel {
struct QueryPairedUserAccountCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
struct ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer;
}
// Type: ::Result
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6562))
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::Result
struct CORDL_TYPE ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result(int64_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result const&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result&&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result& operator=(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result& operator=(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result_Unwrapped : int64_t {
__DevicePairedToUserAccount = 2,
__UserAccountSelectionInProgress = 4,
__UserAccountSelectionComplete = 8,
__UserAccountSelectionCanceled = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result_Unwrapped>(__instance);
}


// Fields

 int64_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int64_t value) ;

constexpr int64_t __get_value__() const;

/// @brief Field DevicePairedToUserAccount offset 0
static ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result const DevicePairedToUserAccount;

/// @brief Field UserAccountSelectionInProgress offset 0
static ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result const UserAccountSelectionInProgress;

/// @brief Field UserAccountSelectionComplete offset 0
static ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result const UserAccountSelectionComplete;

/// @brief Field UserAccountSelectionCanceled offset 0
static ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result const UserAccountSelectionCanceled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<nameBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6563))
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::<nameBuffer>e__FixedBuffer
struct CORDL_TYPE ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer const&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer&&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x200};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<idBuffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6564))
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand::<idBuffer>e__FixedBuffer
struct CORDL_TYPE ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer const&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer&&) = default;
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer& operator=(____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x200};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::QueryPairedUserAccountCommand
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6565))
// CS Name: UnityEngine.InputSystem.LowLevel.QueryPairedUserAccountCommand
struct CORDL_TYPE QueryPairedUserAccountCommand : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _idBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer;

using _nameBuffer_e__FixedBuffer = ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer;

using Result = ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result;

/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const;

// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "nameBuffer", ty: "::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "idBuffer", ty: "::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr QueryPairedUserAccountCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint64_t handle, ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer nameBuffer, ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer idBuffer) noexcept;


                    constexpr QueryPairedUserAccountCommand(QueryPairedUserAccountCommand const&) = default;
                    constexpr QueryPairedUserAccountCommand(QueryPairedUserAccountCommand&&) = default;
                    constexpr QueryPairedUserAccountCommand& operator=(QueryPairedUserAccountCommand const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr QueryPairedUserAccountCommand& operator=(QueryPairedUserAccountCommand&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x410};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit QueryPairedUserAccountCommand(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kMaxNameLength offset 0
static constexpr int32_t  kMaxNameLength{256};

/// @brief Field kMaxIdLength offset 0
static constexpr int32_t  kMaxIdLength{256};

/// @brief Field kSize offset 0
static constexpr int32_t  kSize{1040};

 ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __declspec(property(get=__get_baseCommand, put=__set_baseCommand))  baseCommand;

constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand __get_baseCommand() const;

 uint64_t __declspec(property(get=__get_handle, put=__set_handle))  handle;

constexpr void __set_handle(uint64_t value) ;

constexpr uint64_t __get_handle() const;

 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer __declspec(property(get=__get_nameBuffer, put=__set_nameBuffer))  nameBuffer;

constexpr void __set_nameBuffer(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer __get_nameBuffer() const;

 ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer __declspec(property(get=__get_idBuffer, put=__set_idBuffer))  idBuffer;

constexpr void __set_idBuffer(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer __get_idBuffer() const;


// Properties

static ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_Type))  Type;

 ::StringW __declspec(property(get=get_id, put=set_id))  id;

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 ::UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_typeStatic))  typeStatic;


// Methods

/// @brief Method get_Type addr 0x29554e4 size 0x30 virtual false final false
static ::UnityEngine::InputSystem::Utilities::FourCC get_Type() ;

/// @brief Method get_id addr 0x2955514 size 0x10 virtual false final false
 ::StringW get_id() ;

/// @brief Method set_id addr 0x2955524 size 0x114 virtual false final false
 void set_id(::StringW value) ;

/// @brief Method get_name addr 0x2955638 size 0x10 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x2955648 size 0x114 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method get_typeStatic addr 0x295575c size 0x30 virtual true final true
 ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic() ;

/// @brief Method Create addr 0x295578c size 0x58 virtual false final false
static ::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/Result");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/<idBuffer>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::____UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "QueryPairedUserAccountCommand/<nameBuffer>e__FixedBuffer");
