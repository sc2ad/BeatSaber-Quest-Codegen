#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceQueryResultsData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceShareResultData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData;
}
namespace System {
struct Guid;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceStorageLocation;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__SpaceComponentType;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRDeserialize;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceListSaveResultData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceQueryResultsData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpaceShareResultData;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData;
}
// Type: ::DisplayRefreshRateChangedData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8892))
// CS Name: OVRDeserialize::DisplayRefreshRateChangedData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FromRefreshRate", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ToRefreshRate", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData(float_t FromRefreshRate, float_t ToRefreshRate) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData(GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData(GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData& operator=(GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData& operator=(GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_FromRefreshRate, put=__set_FromRefreshRate))  FromRefreshRate;

constexpr void __set_FromRefreshRate(float_t value) ;

constexpr float_t __get_FromRefreshRate() const;

 float_t __declspec(property(get=__get_ToRefreshRate, put=__set_ToRefreshRate))  ToRefreshRate;

constexpr void __set_ToRefreshRate(float_t value) ;

constexpr float_t __get_ToRefreshRate() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpaceQueryResultsData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8893))
// CS Name: OVRDeserialize::SpaceQueryResultsData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__SpaceQueryResultsData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__SpaceQueryResultsData(uint64_t RequestId) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__SpaceQueryResultsData(GlobalNamespace__OVRDeserialize__SpaceQueryResultsData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceQueryResultsData(GlobalNamespace__OVRDeserialize__SpaceQueryResultsData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceQueryResultsData& operator=(GlobalNamespace__OVRDeserialize__SpaceQueryResultsData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__SpaceQueryResultsData& operator=(GlobalNamespace__OVRDeserialize__SpaceQueryResultsData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__SpaceQueryResultsData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_RequestId, put=__set_RequestId))  RequestId;

constexpr void __set_RequestId(uint64_t value) ;

constexpr uint64_t __get_RequestId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpaceQueryCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8894))
// CS Name: OVRDeserialize::SpaceQueryCompleteData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData(uint64_t RequestId, int32_t Result) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData(GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData(GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_RequestId, put=__set_RequestId))  RequestId;

constexpr void __set_RequestId(uint64_t value) ;

constexpr uint64_t __get_RequestId() const;

 int32_t __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(int32_t value) ;

constexpr int32_t __get_Result() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SceneCaptureCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8895))
// CS Name: OVRDeserialize::SceneCaptureCompleteData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData(uint64_t RequestId, int32_t Result) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData(GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData(GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData& operator=(GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData& operator=(GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_RequestId, put=__set_RequestId))  RequestId;

constexpr void __set_RequestId(uint64_t value) ;

constexpr uint64_t __get_RequestId() const;

 int32_t __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(int32_t value) ;

constexpr int32_t __get_Result() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpatialAnchorCreateCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8896))
// CS Name: OVRDeserialize::SpatialAnchorCreateCompleteData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "System::Guid", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space, System::Guid Uuid) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData(GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData(GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_RequestId, put=__set_RequestId))  RequestId;

constexpr void __set_RequestId(uint64_t value) ;

constexpr uint64_t __get_RequestId() const;

 int32_t __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(int32_t value) ;

constexpr int32_t __get_Result() const;

 uint64_t __declspec(property(get=__get_Space, put=__set_Space))  Space;

constexpr void __set_Space(uint64_t value) ;

constexpr uint64_t __get_Space() const;

 System::Guid __declspec(property(get=__get_Uuid, put=__set_Uuid))  Uuid;

constexpr void __set_Uuid(System::Guid value) ;

constexpr System::Guid __get_Uuid() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpaceSetComponentStatusCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8897))
// CS Name: OVRDeserialize::SpaceSetComponentStatusCompleteData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "System::Guid", modifiers: "", def_value: None }, CppParam { name: "ComponentType", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType", modifiers: "", def_value: None }, CppParam { name: "Enabled", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space, System::Guid Uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType ComponentType, int32_t Enabled) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData(GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData(GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_RequestId, put=__set_RequestId))  RequestId;

constexpr void __set_RequestId(uint64_t value) ;

constexpr uint64_t __get_RequestId() const;

 int32_t __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(int32_t value) ;

constexpr int32_t __get_Result() const;

 uint64_t __declspec(property(get=__get_Space, put=__set_Space))  Space;

constexpr void __set_Space(uint64_t value) ;

constexpr uint64_t __get_Space() const;

 System::Guid __declspec(property(get=__get_Uuid, put=__set_Uuid))  Uuid;

constexpr void __set_Uuid(System::Guid value) ;

constexpr System::Guid __get_Uuid() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType __declspec(property(get=__get_ComponentType, put=__set_ComponentType))  ComponentType;

constexpr void __set_ComponentType(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceComponentType __get_ComponentType() const;

 int32_t __declspec(property(get=__get_Enabled, put=__set_Enabled))  Enabled;

constexpr void __set_Enabled(int32_t value) ;

constexpr int32_t __get_Enabled() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpaceSaveCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8898))
// CS Name: OVRDeserialize::SpaceSaveCompleteData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "System::Guid", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData(uint64_t RequestId, uint64_t Space, int32_t Result, System::Guid Uuid) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData(GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData(GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_RequestId, put=__set_RequestId))  RequestId;

constexpr void __set_RequestId(uint64_t value) ;

constexpr uint64_t __get_RequestId() const;

 uint64_t __declspec(property(get=__get_Space, put=__set_Space))  Space;

constexpr void __set_Space(uint64_t value) ;

constexpr uint64_t __get_Space() const;

 int32_t __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(int32_t value) ;

constexpr int32_t __get_Result() const;

 System::Guid __declspec(property(get=__get_Uuid, put=__set_Uuid))  Uuid;

constexpr void __set_Uuid(System::Guid value) ;

constexpr System::Guid __get_Uuid() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpaceEraseCompleteData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8899))
// CS Name: OVRDeserialize::SpaceEraseCompleteData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Uuid", ty: "System::Guid", modifiers: "", def_value: None }, CppParam { name: "Location", ty: "GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData(uint64_t RequestId, int32_t Result, System::Guid Uuid, GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation Location) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData(GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData(GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData& operator=(GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_RequestId, put=__set_RequestId))  RequestId;

constexpr void __set_RequestId(uint64_t value) ;

constexpr uint64_t __get_RequestId() const;

 int32_t __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(int32_t value) ;

constexpr int32_t __get_Result() const;

 System::Guid __declspec(property(get=__get_Uuid, put=__set_Uuid))  Uuid;

constexpr void __set_Uuid(System::Guid value) ;

constexpr System::Guid __get_Uuid() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation __declspec(property(get=__get_Location, put=__set_Location))  Location;

constexpr void __set_Location(GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__SpaceStorageLocation __get_Location() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpaceShareResultData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8900))
// CS Name: OVRDeserialize::SpaceShareResultData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__SpaceShareResultData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__SpaceShareResultData(uint64_t RequestId, int32_t Result) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__SpaceShareResultData(GlobalNamespace__OVRDeserialize__SpaceShareResultData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceShareResultData(GlobalNamespace__OVRDeserialize__SpaceShareResultData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceShareResultData& operator=(GlobalNamespace__OVRDeserialize__SpaceShareResultData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__SpaceShareResultData& operator=(GlobalNamespace__OVRDeserialize__SpaceShareResultData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__SpaceShareResultData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_RequestId, put=__set_RequestId))  RequestId;

constexpr void __set_RequestId(uint64_t value) ;

constexpr uint64_t __get_RequestId() const;

 int32_t __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(int32_t value) ;

constexpr int32_t __get_Result() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SpaceListSaveResultData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8901))
// CS Name: OVRDeserialize::SpaceListSaveResultData
struct CORDL_TYPE GlobalNamespace__OVRDeserialize__SpaceListSaveResultData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRDeserialize__SpaceListSaveResultData(uint64_t RequestId, int32_t Result) noexcept;


                    constexpr GlobalNamespace__OVRDeserialize__SpaceListSaveResultData(GlobalNamespace__OVRDeserialize__SpaceListSaveResultData const&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceListSaveResultData(GlobalNamespace__OVRDeserialize__SpaceListSaveResultData&&) = default;
                    constexpr GlobalNamespace__OVRDeserialize__SpaceListSaveResultData& operator=(GlobalNamespace__OVRDeserialize__SpaceListSaveResultData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRDeserialize__SpaceListSaveResultData& operator=(GlobalNamespace__OVRDeserialize__SpaceListSaveResultData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRDeserialize__SpaceListSaveResultData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint64_t __declspec(property(get=__get_RequestId, put=__set_RequestId))  RequestId;

constexpr void __set_RequestId(uint64_t value) ;

constexpr uint64_t __get_RequestId() const;

 int32_t __declspec(property(get=__get_Result, put=__set_Result))  Result;

constexpr void __set_Result(int32_t value) ;

constexpr int32_t __get_Result() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRDeserialize
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8902))
// CS Name: OVRDeserialize
class CORDL_TYPE OVRDeserialize : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SpaceListSaveResultData = GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceListSaveResultData;

using SpaceShareResultData = GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceShareResultData;

using SpaceEraseCompleteData = GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData;

using SpaceSaveCompleteData = GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData;

using SpaceSetComponentStatusCompleteData = GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData;

using SpatialAnchorCreateCompleteData = GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData;

using SceneCaptureCompleteData = GlobalNamespace::GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData;

using SpaceQueryCompleteData = GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData;

using SpaceQueryResultsData = GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryResultsData;

using DisplayRefreshRateChangedData = GlobalNamespace::GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRDeserialize() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: " const&", def_value: None }]
constexpr OVRDeserialize(OVRDeserialize const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRDeserialize", modifiers: "&&", def_value: None }]
constexpr OVRDeserialize(OVRDeserialize&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRDeserialize(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRDeserialize& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRDeserialize& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRDeserialize& operator=(OVRDeserialize&& o) noexcept = default;
  constexpr OVRDeserialize& operator=(OVRDeserialize const& o) noexcept = default;
                


// Methods

/// @brief Method ByteArrayToStructure addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T ByteArrayToStructure(::ArrayW<uint8_t> bytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRDeserialize);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRDeserialize, "", "OVRDeserialize");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__DisplayRefreshRateChangedData, "", "OVRDeserialize/DisplayRefreshRateChangedData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__SceneCaptureCompleteData, "", "OVRDeserialize/SceneCaptureCompleteData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceEraseCompleteData, "", "OVRDeserialize/SpaceEraseCompleteData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceListSaveResultData, "", "OVRDeserialize/SpaceListSaveResultData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryCompleteData, "", "OVRDeserialize/SpaceQueryCompleteData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceQueryResultsData, "", "OVRDeserialize/SpaceQueryResultsData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSaveCompleteData, "", "OVRDeserialize/SpaceSaveCompleteData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceSetComponentStatusCompleteData, "", "OVRDeserialize/SpaceSetComponentStatusCompleteData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__SpaceShareResultData, "", "OVRDeserialize/SpaceShareResultData");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRDeserialize__SpatialAnchorCreateCompleteData, "", "OVRDeserialize/SpatialAnchorCreateCompleteData");
