#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace Unity::IO::LowLevel::Unsafe {
struct FileReadType;
}
namespace Unity::IO::LowLevel::Unsafe {
struct AssetLoadingSubsystem;
}
namespace Unity::IO::LowLevel::Unsafe {
struct Priority;
}
namespace Unity::IO::LowLevel::Unsafe {
struct ProcessingState;
}
// Forward declare root types
namespace Unity::IO::LowLevel::Unsafe {
struct AsyncReadManagerRequestMetric;
}
// Type: Unity.IO.LowLevel.Unsafe::AsyncReadManagerRequestMetric
namespace Unity::IO::LowLevel::Unsafe {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9932))
// CS Name: Unity.IO.LowLevel.Unsafe.AsyncReadManagerRequestMetric
struct CORDL_TYPE AsyncReadManagerRequestMetric : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_AssetName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_FileName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_OffsetBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_SizeBytes_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_AssetTypeId_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_CurrentBytesRead_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "_BatchReadCount_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_IsBatchRead_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_State_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::ProcessingState", modifiers: "", def_value: None }, CppParam { name: "_ReadType_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::FileReadType", modifiers: "", def_value: None }, CppParam { name: "_PriorityLevel_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::Priority", modifiers: "", def_value: None }, CppParam { name: "_Subsystem_k__BackingField", ty: "::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem", modifiers: "", def_value: None }, CppParam { name: "_RequestTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_TimeInQueueMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "_TotalTimeMicroseconds_k__BackingField", ty: "double_t", modifiers: "", def_value: None }]
constexpr AsyncReadManagerRequestMetric(::StringW _AssetName_k__BackingField, ::StringW _FileName_k__BackingField, uint64_t _OffsetBytes_k__BackingField, uint64_t _SizeBytes_k__BackingField, uint64_t _AssetTypeId_k__BackingField, uint64_t _CurrentBytesRead_k__BackingField, uint32_t _BatchReadCount_k__BackingField, bool _IsBatchRead_k__BackingField, ::Unity::IO::LowLevel::Unsafe::ProcessingState _State_k__BackingField, ::Unity::IO::LowLevel::Unsafe::FileReadType _ReadType_k__BackingField, ::Unity::IO::LowLevel::Unsafe::Priority _PriorityLevel_k__BackingField, ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem _Subsystem_k__BackingField, double_t _RequestTimeMicroseconds_k__BackingField, double_t _TimeInQueueMicroseconds_k__BackingField, double_t _TotalTimeMicroseconds_k__BackingField) noexcept;


                    constexpr AsyncReadManagerRequestMetric(AsyncReadManagerRequestMetric const&) = default;
                    constexpr AsyncReadManagerRequestMetric(AsyncReadManagerRequestMetric&&) = default;
                    constexpr AsyncReadManagerRequestMetric& operator=(AsyncReadManagerRequestMetric const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncReadManagerRequestMetric& operator=(AsyncReadManagerRequestMetric&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncReadManagerRequestMetric(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get__AssetName_k__BackingField, put=__set__AssetName_k__BackingField))  _AssetName_k__BackingField;

constexpr void __set__AssetName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__AssetName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__FileName_k__BackingField, put=__set__FileName_k__BackingField))  _FileName_k__BackingField;

constexpr void __set__FileName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__FileName_k__BackingField() const;

 uint64_t __declspec(property(get=__get__OffsetBytes_k__BackingField, put=__set__OffsetBytes_k__BackingField))  _OffsetBytes_k__BackingField;

constexpr void __set__OffsetBytes_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__OffsetBytes_k__BackingField() const;

 uint64_t __declspec(property(get=__get__SizeBytes_k__BackingField, put=__set__SizeBytes_k__BackingField))  _SizeBytes_k__BackingField;

constexpr void __set__SizeBytes_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__SizeBytes_k__BackingField() const;

 uint64_t __declspec(property(get=__get__AssetTypeId_k__BackingField, put=__set__AssetTypeId_k__BackingField))  _AssetTypeId_k__BackingField;

constexpr void __set__AssetTypeId_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__AssetTypeId_k__BackingField() const;

 uint64_t __declspec(property(get=__get__CurrentBytesRead_k__BackingField, put=__set__CurrentBytesRead_k__BackingField))  _CurrentBytesRead_k__BackingField;

constexpr void __set__CurrentBytesRead_k__BackingField(uint64_t value) ;

constexpr uint64_t __get__CurrentBytesRead_k__BackingField() const;

 uint32_t __declspec(property(get=__get__BatchReadCount_k__BackingField, put=__set__BatchReadCount_k__BackingField))  _BatchReadCount_k__BackingField;

constexpr void __set__BatchReadCount_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__BatchReadCount_k__BackingField() const;

 bool __declspec(property(get=__get__IsBatchRead_k__BackingField, put=__set__IsBatchRead_k__BackingField))  _IsBatchRead_k__BackingField;

constexpr void __set__IsBatchRead_k__BackingField(bool value) ;

constexpr bool __get__IsBatchRead_k__BackingField() const;

 ::Unity::IO::LowLevel::Unsafe::ProcessingState __declspec(property(get=__get__State_k__BackingField, put=__set__State_k__BackingField))  _State_k__BackingField;

constexpr void __set__State_k__BackingField(::Unity::IO::LowLevel::Unsafe::ProcessingState value) ;

constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState __get__State_k__BackingField() const;

 ::Unity::IO::LowLevel::Unsafe::FileReadType __declspec(property(get=__get__ReadType_k__BackingField, put=__set__ReadType_k__BackingField))  _ReadType_k__BackingField;

constexpr void __set__ReadType_k__BackingField(::Unity::IO::LowLevel::Unsafe::FileReadType value) ;

constexpr ::Unity::IO::LowLevel::Unsafe::FileReadType __get__ReadType_k__BackingField() const;

 ::Unity::IO::LowLevel::Unsafe::Priority __declspec(property(get=__get__PriorityLevel_k__BackingField, put=__set__PriorityLevel_k__BackingField))  _PriorityLevel_k__BackingField;

constexpr void __set__PriorityLevel_k__BackingField(::Unity::IO::LowLevel::Unsafe::Priority value) ;

constexpr ::Unity::IO::LowLevel::Unsafe::Priority __get__PriorityLevel_k__BackingField() const;

 ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem __declspec(property(get=__get__Subsystem_k__BackingField, put=__set__Subsystem_k__BackingField))  _Subsystem_k__BackingField;

constexpr void __set__Subsystem_k__BackingField(::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem value) ;

constexpr ::Unity::IO::LowLevel::Unsafe::AssetLoadingSubsystem __get__Subsystem_k__BackingField() const;

 double_t __declspec(property(get=__get__RequestTimeMicroseconds_k__BackingField, put=__set__RequestTimeMicroseconds_k__BackingField))  _RequestTimeMicroseconds_k__BackingField;

constexpr void __set__RequestTimeMicroseconds_k__BackingField(double_t value) ;

constexpr double_t __get__RequestTimeMicroseconds_k__BackingField() const;

 double_t __declspec(property(get=__get__TimeInQueueMicroseconds_k__BackingField, put=__set__TimeInQueueMicroseconds_k__BackingField))  _TimeInQueueMicroseconds_k__BackingField;

constexpr void __set__TimeInQueueMicroseconds_k__BackingField(double_t value) ;

constexpr double_t __get__TimeInQueueMicroseconds_k__BackingField() const;

 double_t __declspec(property(get=__get__TotalTimeMicroseconds_k__BackingField, put=__set__TotalTimeMicroseconds_k__BackingField))  _TotalTimeMicroseconds_k__BackingField;

constexpr void __set__TotalTimeMicroseconds_k__BackingField(double_t value) ;

constexpr double_t __get__TotalTimeMicroseconds_k__BackingField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::IO::LowLevel::Unsafe
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::LowLevel::Unsafe::AsyncReadManagerRequestMetric, "Unity.IO.LowLevel.Unsafe", "AsyncReadManagerRequestMetric");
