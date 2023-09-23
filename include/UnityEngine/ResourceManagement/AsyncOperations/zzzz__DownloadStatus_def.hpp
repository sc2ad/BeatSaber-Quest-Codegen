#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
// Type: UnityEngine.ResourceManagement.AsyncOperations::DownloadStatus
namespace UnityEngine::ResourceManagement::AsyncOperations {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14317))
// CS Name: UnityEngine.ResourceManagement.AsyncOperations.DownloadStatus
struct CORDL_TYPE DownloadStatus : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "TotalBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "DownloadedBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "IsDone", ty: "bool", modifiers: "", def_value: None }]
constexpr DownloadStatus(int64_t TotalBytes, int64_t DownloadedBytes, bool IsDone) noexcept;


                    constexpr DownloadStatus(DownloadStatus const&) = default;
                    constexpr DownloadStatus(DownloadStatus&&) = default;
                    constexpr DownloadStatus& operator=(DownloadStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DownloadStatus& operator=(DownloadStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DownloadStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int64_t __declspec(property(get=__get_TotalBytes, put=__set_TotalBytes))  TotalBytes;

constexpr void __set_TotalBytes(int64_t value) ;

constexpr int64_t __get_TotalBytes() const;

 int64_t __declspec(property(get=__get_DownloadedBytes, put=__set_DownloadedBytes))  DownloadedBytes;

constexpr void __set_DownloadedBytes(int64_t value) ;

constexpr int64_t __get_DownloadedBytes() const;

 bool __declspec(property(get=__get_IsDone, put=__set_IsDone))  IsDone;

constexpr void __set_IsDone(bool value) ;

constexpr bool __get_IsDone() const;


// Properties

 float_t __declspec(property(get=get_Percent))  Percent;


// Methods

/// @brief Method get_Percent addr 0x2a45d3c size 0x38 virtual false final false
 float_t get_Percent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::AsyncOperations
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus, "UnityEngine.ResourceManagement.AsyncOperations", "DownloadStatus");
