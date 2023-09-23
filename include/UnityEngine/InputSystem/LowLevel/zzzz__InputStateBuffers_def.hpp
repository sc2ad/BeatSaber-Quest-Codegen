#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct InputStateBuffers;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers;
}
// Type: ::DoubleBuffers
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6650))
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateBuffers::DoubleBuffers
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "deviceToBufferMapping", ty: "void*", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers(void* deviceToBufferMapping) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers(UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers(UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers& operator=(UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers& operator=(UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_deviceToBufferMapping, put=__set_deviceToBufferMapping))  deviceToBufferMapping;

constexpr void __set_deviceToBufferMapping(void* value) ;

constexpr void* __get_deviceToBufferMapping() const;


// Properties

 bool __declspec(property(get=get_valid))  valid;


// Methods

/// @brief Method get_valid addr 0x2963b88 size 0x10 virtual false final false
 bool get_valid() ;

/// @brief Method SetFrontBuffer addr 0x2963714 size 0x10 virtual false final false
 void SetFrontBuffer(int32_t deviceIndex, void* ptr) ;

/// @brief Method SetBackBuffer addr 0x2963724 size 0x14 virtual false final false
 void SetBackBuffer(int32_t deviceIndex, void* ptr) ;

/// @brief Method GetFrontBuffer addr 0x29634b4 size 0x10 virtual false final false
 void* GetFrontBuffer(int32_t deviceIndex) ;

/// @brief Method GetBackBuffer addr 0x296351c size 0x14 virtual false final false
 void* GetBackBuffer(int32_t deviceIndex) ;

/// @brief Method SwapBuffers addr 0x2963b98 size 0x28 virtual false final false
 void SwapBuffers(int32_t deviceIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputStateBuffers
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6651))
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateBuffers
struct CORDL_TYPE InputStateBuffers : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using DoubleBuffers = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers;

// Ctor Parameters [CppParam { name: "sizePerBuffer", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "totalSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "defaultStateBuffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "noiseMaskBuffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "resetMaskBuffer", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_AllBuffers", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_PlayerStateBuffers", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers", modifiers: "", def_value: None }]
constexpr InputStateBuffers(uint32_t sizePerBuffer, uint32_t totalSize, void* defaultStateBuffer, void* noiseMaskBuffer, void* resetMaskBuffer, void* m_AllBuffers, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers m_PlayerStateBuffers) noexcept;


                    constexpr InputStateBuffers(InputStateBuffers const&) = default;
                    constexpr InputStateBuffers(InputStateBuffers&&) = default;
                    constexpr InputStateBuffers& operator=(InputStateBuffers const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputStateBuffers& operator=(InputStateBuffers&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputStateBuffers(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint32_t __declspec(property(get=__get_sizePerBuffer, put=__set_sizePerBuffer))  sizePerBuffer;

constexpr void __set_sizePerBuffer(uint32_t value) ;

constexpr uint32_t __get_sizePerBuffer() const;

 uint32_t __declspec(property(get=__get_totalSize, put=__set_totalSize))  totalSize;

constexpr void __set_totalSize(uint32_t value) ;

constexpr uint32_t __get_totalSize() const;

 void* __declspec(property(get=__get_defaultStateBuffer, put=__set_defaultStateBuffer))  defaultStateBuffer;

constexpr void __set_defaultStateBuffer(void* value) ;

constexpr void* __get_defaultStateBuffer() const;

 void* __declspec(property(get=__get_noiseMaskBuffer, put=__set_noiseMaskBuffer))  noiseMaskBuffer;

constexpr void __set_noiseMaskBuffer(void* value) ;

constexpr void* __get_noiseMaskBuffer() const;

 void* __declspec(property(get=__get_resetMaskBuffer, put=__set_resetMaskBuffer))  resetMaskBuffer;

constexpr void __set_resetMaskBuffer(void* value) ;

constexpr void* __get_resetMaskBuffer() const;

 void* __declspec(property(get=__get_m_AllBuffers, put=__set_m_AllBuffers))  m_AllBuffers;

constexpr void __set_m_AllBuffers(void* value) ;

constexpr void* __get_m_AllBuffers() const;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers __declspec(property(get=__get_m_PlayerStateBuffers, put=__set_m_PlayerStateBuffers))  m_PlayerStateBuffers;

constexpr void __set_m_PlayerStateBuffers(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers value) ;

constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers __get_m_PlayerStateBuffers() const;

static void* __declspec(property(get=__get_s_DefaultStateBuffer, put=__set_s_DefaultStateBuffer))  s_DefaultStateBuffer;

static void __set_s_DefaultStateBuffer(void* value) ;

static void* __get_s_DefaultStateBuffer() ;

static void* __declspec(property(get=__get_s_NoiseMaskBuffer, put=__set_s_NoiseMaskBuffer))  s_NoiseMaskBuffer;

static void __set_s_NoiseMaskBuffer(void* value) ;

static void* __get_s_NoiseMaskBuffer() ;

static void* __declspec(property(get=__get_s_ResetMaskBuffer, put=__set_s_ResetMaskBuffer))  s_ResetMaskBuffer;

static void __set_s_ResetMaskBuffer(void* value) ;

static void* __get_s_ResetMaskBuffer() ;

static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers __declspec(property(get=__get_s_CurrentBuffers, put=__set_s_CurrentBuffers))  s_CurrentBuffers;

static void __set_s_CurrentBuffers(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers value) ;

static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers __get_s_CurrentBuffers() ;


// Methods

/// @brief Method GetDoubleBuffersFor addr 0x2963388 size 0xd8 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers GetDoubleBuffersFor(UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) ;

/// @brief Method GetFrontBufferForDevice addr 0x2963460 size 0x54 virtual false final false
static void* GetFrontBufferForDevice(int32_t deviceIndex) ;

/// @brief Method GetBackBufferForDevice addr 0x29634c4 size 0x58 virtual false final false
static void* GetBackBufferForDevice(int32_t deviceIndex) ;

/// @brief Method SwitchTo addr 0x2963530 size 0x64 virtual false final false
static void SwitchTo(UnityEngine::InputSystem::LowLevel::InputStateBuffers buffers, UnityEngine::InputSystem::LowLevel::InputUpdateType update) ;

/// @brief Method AllocateAll addr 0x2963594 size 0xbc virtual false final false
 void AllocateAll(::ArrayW<UnityEngine::InputSystem::InputDevice> devices, int32_t deviceCount) ;

/// @brief Method SetUpDeviceToBufferMappings addr 0x29636bc size 0x58 virtual false final false
static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers SetUpDeviceToBufferMappings(int32_t deviceCount, ByRef<void*> bufferPtr, uint32_t sizePerBuffer, uint32_t mappingTableSizePerBuffer) ;

/// @brief Method FreeAll addr 0x2963738 size 0xc0 virtual false final false
 void FreeAll() ;

/// @brief Method MigrateAll addr 0x29637f8 size 0x108 virtual false final false
 void MigrateAll(::ArrayW<UnityEngine::InputSystem::InputDevice> devices, int32_t deviceCount, UnityEngine::InputSystem::LowLevel::InputStateBuffers oldBuffers) ;

/// @brief Method MigrateDoubleBuffer addr 0x2963900 size 0x118 virtual false final false
static void MigrateDoubleBuffer(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers newBuffer, ::ArrayW<UnityEngine::InputSystem::InputDevice> devices, int32_t deviceCount, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers oldBuffer) ;

/// @brief Method MigrateSingleBuffer addr 0x2963a18 size 0xb8 virtual false final false
static void MigrateSingleBuffer(void* newBuffer, ::ArrayW<UnityEngine::InputSystem::InputDevice> devices, int32_t deviceCount, void* oldBuffer) ;

/// @brief Method ComputeSizeOfSingleStateBuffer addr 0x2963650 size 0x6c virtual false final false
static uint32_t ComputeSizeOfSingleStateBuffer(::ArrayW<UnityEngine::InputSystem::InputDevice> devices, int32_t deviceCount) ;

/// @brief Method NextDeviceOffset addr 0x2963ad0 size 0xb8 virtual false final false
static uint32_t NextDeviceOffset(uint32_t currentOffset, UnityEngine::InputSystem::InputDevice device) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputStateBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateBuffers__DoubleBuffers, "UnityEngine.InputSystem.LowLevel", "InputStateBuffers/DoubleBuffers");
